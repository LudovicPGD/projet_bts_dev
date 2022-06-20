<?php
session_start();

if(isset($_GET["id"])):
    
    $modif = $_GET["id"];

?>
    <html>
        <head>
            <meta charset="UTF-8">
            <meta http-equiv="X-UA-Compatible" content="IE=edge">
            <title>eval</title>
            <link href="style/style.css" rel="stylesheet">
        </head>
    <body style="background-color=black">
        <div class="exo">
            <form action="" method="post" style="margin: auto; width: 220px;">
                <input type="text" name="prenom_modif" value="<?= $_SESSION[$modif][0] ?>"><br><br>
                <input type="text" name="nom_modif" value="<?= $_SESSION[$modif][1] ?>"><br><br>
                <input type="text" name="mail_modif" value="<?= $_SESSION[$modif][2] ?>"><br><br>
                <button type="submit" name="validermodif">Vadider</button>
            </form>
        </div>
    </body>
    </html>


<?php

// Boutton de modification user

        if (isset($_POST['validermodif'])){

            $prenom_modif = ($_POST['prenom_modif']);
            $nom_modif = ($_POST['nom_modif']);
            $mail_modif = ($_POST['mail_modif']);

            $_SESSION[$modif] = [$prenom_modif, $nom_modif, $mail_modif];
            header('Location: index.php');

        }
    endif;
?>