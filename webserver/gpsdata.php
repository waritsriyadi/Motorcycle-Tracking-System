<?php 

require 'config.php';

$lat = $_GET['lat'];
$lng = $_GET['lng'];

echo $lat;
echo "<br>";
echo $lng;

$sql = "UPDATE tbl_gps 
        SET lat = '".$lat."', lng = '".$lng."', created_date = '".date("Y-m-d H:i:s")."'
        WHERE id = 1";

if($db->query($sql) === FALSE)
	{ echo "Error: " . $sql . "<br>" . $db->error; }

echo "<br>";
echo $db->insert_id;

$sql = "UPDATE tbl_gps 
        SET lat = '".$lat."', lng = '".$lng."', created_date = '".date("Y-m-d H:i:s")."'
        WHERE id = 2";

if($db->query($sql) === FALSE)
	{ echo "Error: " . $sql . "<br>" . $db->error; }

echo "<br>";
echo $db->insert_id;
