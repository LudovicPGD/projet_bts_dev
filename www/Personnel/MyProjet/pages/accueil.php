<!DOCTYPE html>
    <html lang="fr">
        <head>
            <meta charset="UTF-8">
            <meta http-equiv="X-UA-Compatible" content="IE=edge">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <link rel="stylesheet" href="../styles/style.css">
            <title>MyProjet</title>
        </head>
        <body>
            <?php
                require_once('../php/mysqli.php');


                session_start();

                if((isset($_POST['identifiant'])) && (isset($_POST['password']))){

                    $user = mysqli_real_escape_string($conn,htmlspecialchars($_POST['identifiant']));
                    $mdp = mysqli_real_escape_string($conn,sha1($_POST['password']));

                    $query = "SELECT * FROM projetcompte WHERE identifiant = '".$user."' AND password = '".$mdp."' ";
                    $requete = mysqli_query($conn, $query);
                    $reponse = mysqli_fetch_array($requete);
                    $id = $reponse['id'];
                    $nom = $reponse['identifiant'];
                    $pwd = $reponse['password'];

                    if($user == $nom && $mdp == $pwd){   
            ?>
            <nav>
                <ul>
                    <li><a href="creation.php">TEST</a></li>
                    <li><a href="">TEST</a></li>
                    <li><a href="">TEST</a></li>
                    <li><a href="">TEST</a></li>
                    <li><a href="../php/deconnexion.php">Deconnexion</a></li>
                </ul>
            </nav>
            <div id="body">
                <div id="moi">
                    <img src="../images/ludovic.jpg" alt="Ludovic">
                    <div id="textmoi">
                        <h2>A propos de moi</h2>
                        <p>Je m'appelle Ludovic Perigaud, j'ai 20 ans, je suis actuellement en BTS SIO en option
                        Slam dans le Lycée Professionnel Jacques Prevert, je suis jeune dîplomé d'un BAC Pro Système-Numérique.</p>
                    </div>
                </div>
            </div>

            <?php
                    }

                    else{
                        header('Location: ../index.php');
                    }
                }
                else{
                    header('Location: ../index.php');
                }
            ?>
        </body>
    </html>