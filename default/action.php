<?php

// $fileDir="http://127.0.0.1:8080/drupal/sites/default/files/";

if(isset($_POST['files']))
{
	$error = ""; //error holder
	if(isset($_POST['createzip']))
	{
		$post = $_POST; 
		$file_folder = "files/"; // folder to load files
		if(extension_loaded('zip'))
		{ 
			// Checking ZIP extension is available
			if(isset($post['files']) and count($post['files']) > 0)
			{ 
				// Checking files are selected
				$zip = new ZipArchive(); // Load zip library 
				$zip_name = "download.zip"; // Zip name
				if($zip->open($zip_name, ZIPARCHIVE::CREATE)!==TRUE)
				{ 
					 // Opening zip file to load files
					$error .= "* Sorry ZIP creation failed at this time";
				}
				foreach($post['files'] as $file)
				{ 

					// $zip->addFile($file_folder.$file); // Adding files into zip
					// $zip->addFromString(basename($file),$download_file);

					$download_file = file_get_contents($file);

   					#add it to the zip
    				$zip->addFile($file_folder.$file);
				}
				$zip->close();
				if(file_exists($zip_name))
				{
					// push to download the zip
					header('Content-type: application/zip');
					header('Content-Disposition: attachment; filename="'.$zip_name.'"');
					readfile($zip_name);
					// remove zip file is exists in temp path
					unlink($zip_name);
				}
			 
			}
			else
			$error .= "* Please select file to zip ";
		}
		else
		$error .= "* You dont have ZIP extension";
	}
}
?>