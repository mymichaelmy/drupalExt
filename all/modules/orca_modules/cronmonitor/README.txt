About
-----
This module was created with the help of http://codekarate.com/ tutorials on module development. When enabled, every time cron runs, it will pull content from github and import it to drupal using the import_html module.

Installation
------------

Install this module like any other drupal modules. For more instructions: http://drupal.org/documentation/install/modules-themes/modules-7


Usage
-----
After installation there will be a configuration page at /admin/config/cronmonitor
Check "Allow import-html with cron run" to turn module on.
Make sure that the local reponame matches the remote repo, and also matches the import_html site root.

Ex setup:

On Cronmonitor - /admin/config/cronmonitor
--------------
local root: sites/default/files/github
local reponame: web
remote repo: github.wdf.sap.corp/i848593/web.git

On Import html - /admin/structure/import_html
--------------
site root on the server: sites/default/files/github/web/