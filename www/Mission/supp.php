<?php
require_once('index.php');

if(isset($_GET["id"])){

    $delete = $_GET["id"];
    unset($_SESSION[$delete]);
    $de = substr($delete, 4, count($_SESSION));
    for($compteur = $de; $compteur < count($_SESSION); $compteur ++){
        $_SESSION['user'.$compteur] = $_SESSION['user'.($compteur + 1)];
        unset($_SESSION['user'.($compteur + 1)]);
    }
    header('Location: index.php');
}
?>