(function($){
    
  /**
   * Attaches the autocomplete behavior to all required fields.
   */
  Drupal.behaviors.liveResults = {
    attach: function (context, settings) {
      var acdb = [];
      $('input.live-result-autocomplete', context).once('autocomplete', function () {
        var uri = this.value;
        if (!acdb[uri]) {
          acdb[uri] = new Drupal.ACDB(uri);
        }
        var $input = $('#' + this.id.substr(0, this.id.length - 13))
        .attr('autocomplete', 'OFF')
        .attr('aria-autocomplete', 'list');
        $($input[0].form).submit(Drupal.autocompleteSubmitLiveResults);
        $input.parent()
        .attr('role', 'application')
        .append($('<span class="element-invisible" aria-live="assertive"></span>')
          .attr('id', $input.attr('id') + '-autocomplete-aria-live')
          );
        new Drupal.jsACLiveResult($input, acdb[uri]);
      });
    }
  };

  /**
   * Prevents the form from submitting if the suggestions popup is open
   * and closes the suggestions popup when doing so.
   */
  Drupal.autocompleteSubmitLiveResults = function () {
    return $('#autocomplete').each(function () {
      this.owner.hidePopup();
    }).size() == 0;
  };

  /**
   * An AutoComplete object.
   */
  Drupal.jsACLiveResult = function ($input, db) {
    var ac = this;
    this.input = $input[0];
    this.ariaLive = $('#' + $input.attr('id') + '-autocomplete-aria-live');
    this.db = db;
    $input
    .keydown(function (event) {
      return ac.onkeydown(this, event);
    })
    .keyup(function (event) {
      ac.onkeyup(this, event);
    });
    $(document).bind('click', function(event) {
      var $target = $(event.target);
      if (!$target.is('#autocomplete') && !$target.closest('#autocomplete').length) {
        ac.hidePopup();
      }      
    })
  };
  
  /**
   * Handler for the "keydown" event.
   */
  Drupal.jsACLiveResult.prototype.onkeydown = function (input, e) {
    if (!e) {
      e = window.event;
    }
    switch (e.keyCode) {
      case 13:
        this.selectEnter();
        return false;
      case 40: // down arrow.
        this.selectDown();
        return false;
      case 38: // up arrow.
        this.selectUp();
        return false;
      default: // All other keys.
        return true;
    }
  };

  /**
   * Handler for the "keyup" event.
   */
  Drupal.jsACLiveResult.prototype.onkeyup = function (input, e) {
    if (!e) {
      e = window.event;
    }
    switch (e.keyCode) {
      case 16: // Shift.
      case 17: // Ctrl.
      case 18: // Alt.
      case 20: // Caps lock.
      case 33: // Page up.
      case 34: // Page down.
      case 35: // End.
      case 36: // Home.
      case 37: // Left arrow.
      case 38: // Up arrow.
      case 39: // Right arrow.
      case 40: // Down arrow.
        return true;

      case 9:  // Tab.
      case 13: // Enter.
      case 27: // Esc.
        this.hidePopup(e.keyCode);
        return true;

      default: // All other keys.
        if (input.value.length > 0)
          this.populatePopup();
        else
          this.hidePopup(e.keyCode);
        return true;
    }
  };
  
  /**
   * Puts the currently highlighted suggestion into the autocomplete field.
   */
  Drupal.jsACLiveResult.prototype.select = function (node) {
  //this.input.value = $(node).data('autocompleteValue');
  };


  /**
  * Opens selected page, created by Angie
  */
  Drupal.jsACLiveResult.prototype.selectEnter = function () {
    if (this.selected) {
      var website = this.selected.innerHTML;
      var startheader = website.search("href=")+6;
      website=website.substring(startheader);
      var endheader = website.search('<')-2;
      var link = website.substring(0,endheader);
      window.open(link,'_self',false);
    }
    else if (this.popup) {
      var lis = $('li', this.popup);
      if (lis.size() > 0) {
        this.highlight(lis.get(0));
      }
    }
  };



  /**
   * Highlights the next suggestion.
   */
  Drupal.jsACLiveResult.prototype.selectDown = function () {
    if (this.selected && this.selected.nextSibling) {
      this.highlight(this.selected.nextSibling);
    }
    else if (this.popup) {
      var lis = $('li', this.popup);
      if (lis.size() > 0) {
        this.highlight(lis.get(0));
      }
    }
  };
  
  /**
 * Highlights the previous suggestion.
 */
  Drupal.jsACLiveResult.prototype.selectUp = function () {
    if (this.selected && this.selected.previousSibling) {
      this.highlight(this.selected.previousSibling);
    }
  };

  /**
 * Highlights a suggestion.
 */
  Drupal.jsACLiveResult.prototype.highlight = function (node) {
    if (this.selected) {
      $(this.selected).removeClass('selected');
    }
    $(node).addClass('selected');
    this.selected = node;
    $(this.ariaLive).html($(this.selected).html());
  };

  /**
   * Unhighlights a suggestion.
   */
  Drupal.jsACLiveResult.prototype.unhighlight = function (node) {
    $(node).removeClass('selected');
    this.selected = false;
    $(this.ariaLive).empty();
  };

  /**
   * Hides the autocomplete suggestions.
   */
  Drupal.jsACLiveResult.prototype.hidePopup = function (keycode, event) {
    // Hide popup.
    var popup = this.popup;
    if (popup) {
      this.popup = null;
      $(popup).fadeOut('fast', function () {
        $(popup).remove();
      });
    }
    this.selected = false;
    $(this.ariaLive).empty();
  };
  
  /**
   * Positions the suggestions popup and starts a search.
   */
  Drupal.jsACLiveResult.prototype.populatePopup = function () {
    var $input = $(this.input);
    var position = $input.position();
    // Show popup.
    if (this.popup) {
      $(this.popup).remove();
    }
    this.selected = false;
    this.popup = $('<div id="autocomplete"></div>')[0];
    this.popup.owner = this;
    $(this.popup).css({
      top: parseInt(position.top + this.input.offsetHeight, 10) + 'px',
      left: parseInt(position.left, 10) + 'px',
      width: $input.innerWidth() + 'px',
      display: 'none'
    });
    $('#autocomplete').css("color","black");
    $input.before(this.popup);

    // Do search.
    this.db.owner = this;  
    this.db.searchLiveResult(this.input.value);
   
  };
  
  /**
   * Fills the suggestion popup with any matches received. 
   * Modified by Angie
   */
  Drupal.jsACLiveResult.prototype.found = function (matches,term) {
    // If no value in the textfield, do not show the popup.
    if (!this.input.value.length) {
      return false;
    }
    
    // Prepare matches.
    var ul = $('<ul></ul>');
    var ac = this;
    var currentCT='none';
    for (key in matches) {
      
      //get link  
      var startheader = matches[key].search('<a');
      var endheader = matches[key].search('</a>');
      var link = matches[key].substring(startheader,endheader);

      //get content type
      var startCT = matches[key].search('node node-')+10;
      if(startCT==0)
        ct='type unavailable';
      else{
        var ct = matches[key].substring(startCT);
        var endCT =ct.search(' ');
        ct = ct.substring(0,endCT);
      }
      
      //if new content type, add label
      if(ct!=currentCT){
        if(ct!='project'&&ct!='document'&&ct!='learning'&&ct!='help'){
          ct='other';
        }
        if(ct!=currentCT)
          $('<li class="live-result-search-item-wrapper"></li>')
          .html($('<div class="live-result-search-item"></div>').html(ct.toUpperCase()))
          .appendTo(ul);
      }
      currentCT=ct;

      //add match
      $('<li class="live-result-search-item-wrapper"></li>')
      .html($('<div class="live-result-search-item"></div>').html(link))
      .mouseover(function () {
        ac.highlight(this);
      })
      .mouseout(function () {
        ac.unhighlight(this);
      })
      .appendTo(ul);
      
    }

    // Show popup with matches, if any.
    if (this.popup) {
      if (ul.children().size()) {
        $(this.popup).empty().append(ul).show();
        $(this.ariaLive).html(Drupal.t('Autocomplete popup'));
      }
      else {
        $(this.popup).css({
          visibility: 'hidden'
        });
        this.hidePopup();
      }
    }
  };
  
  Drupal.jsACLiveResult.prototype.setStatus = function (status) {
    switch (status) {
      case 'begin':
        $(this.input).addClass('throbbing');
        $(this.ariaLive).html(Drupal.t('Searching for matches...'));
        break;
      case 'cancel':
      case 'error':
      case 'found':
        $(this.input).removeClass('throbbing');
        break;
    }
  };
   
  /**
   * Performs a cached and delayed search.
   */
  Drupal.ACDB.prototype.searchLiveResult = function (searchString,ctindeces) {
    var db = this;
    this.searchString = searchString;

    // Strip double, leading and trailing whitespaces
    searchString = searchString.replace(/(^\s*)|(\s*$)/gi,"");
    searchString = searchString.replace(/[ ]{2,}/gi," ");
    searchString = searchString.replace(/\n /,"\n");
  
    // Minimum 3 characters should be provided
    if (searchString.length <= 1 ||
      searchString.charAt(searchString.length - 1) == ',') {
      return;
    }

    // See if this key has been searched for before.
    if (this.cache[searchString]) {
      return this.owner.found(this.cache[searchString],searchString);
    }

    // Initiate delayed search.
    if (this.timer) {
      clearTimeout(this.timer);
    }
    this.timer = setTimeout(function () {
      db.owner.setStatus('begin');

      ajax_properties = {
        'type': 'GET',
        'success': function (matches) {
          if (typeof matches.status == 'undefined' || matches.status != 0) {
            
            //sort by content type
            currentCT='none';
            var projects = [];
            var documents = [];
            var help = [];
            var learning = [];
            var other = [];

            for(key in matches){

              //bold searched term in title
              var temp = matches[key];
              var startheader = matches[key].search('<a');
              var endheader = matches[key].search('</a>');
              var link = temp.substring(startheader,endheader);
              var endOfUrl = link.search('>')+1;
              var url = link.substring(0,endOfUrl);
              var rest = link.substring(endOfUrl);
              var regex = new RegExp( '(' + searchString + ')', 'gi' );
              bolded= rest.replace( regex, "<b>$1</b>" );
              
              //update matches array
              matches[key]=temp.substring(0,startheader)+url+bolded+temp.substring(endheader);
              
              //get indeces of content type
              var startCT = matches[key].search('node node-')+10;
              var ct = matches[key].substring(startCT);
              var endCT =ct.search(' ');
              ct = ct.substring(0,endCT);
              currentCT=ct; 
              
              //push item to correct content type array, limit number of each
              switch(ct) {
                case 'project':
                    if(projects.length<5)
                      projects.push(matches[key]);
                    break;
                case 'document':
                    if(documents.length<5)
                      documents.push(matches[key]);
                    break;
                case 'learning':
                    if(length.length<3)
                      learning.push(matches[key]);
                    break;
                case 'help':
                    if(help.length<3)
                    help.push(matches[key]);
                    break;
                default:
                    if(other.length<8)
                      other.push(matches[key]);
                    break;
              }

            }

            //cache the reorganized array
            var sorted = projects.concat(documents).concat(learning).concat(help).concat(other);
            db.cache[searchString] =sorted;
            
            // Verify if these are still the matches the user wants to see.
            if (db.searchString == searchString) {
              db.owner.found(sorted,searchString);
            }
            db.owner.setStatus('found');
          }
        },
        'error': function (xmlhttp) {
        //
        }
      }

      if($(db.owner.input).hasClass('caching-method-enabled')) {
        ajax_properties.url =  db.uri;
        ajax_properties.data = {
          'keys': encodeURIComponent(searchString)
        }
      }
      else {
        ajax_properties.url = db.uri + '/' + encodeURIComponent(searchString);
      }

      $.ajax(ajax_properties);

    }, this.delay);
  };

})(jQuery);