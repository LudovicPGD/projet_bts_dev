<?php
    require_once('index.html');

    $mot = ($_POST["mot"]);
    $lettre = ($_POST["lettre"]);

    function trouver($mot, $lettre){
        $posi = stripos($mot, $lettre);
            echo $posi;
    }
        trouver($mot, $lettre);
?>

