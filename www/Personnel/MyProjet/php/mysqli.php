<?php
    $servername = "localhost";
    $serverusername = "root";
    $servermdp = "";
    $serverdb = "myprojet";

    $conn = mysqli_connect($servername, $serverusername, $servermdp, $serverdb);
                
    if ($conn->connect_error){

        die("La connexion a échoué: " . $conn->connect_error);
    } 
?>