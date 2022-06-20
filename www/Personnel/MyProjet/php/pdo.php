<?php
    try{

         $conn = new PDO('mysql:host=localhost;dbname=myprojet', 'root', '');
    }
    
    catch(Exception $e){

        die('Erreur : '.$e->getMessage());
    }
?>