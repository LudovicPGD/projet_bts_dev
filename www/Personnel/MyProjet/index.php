<!DOCTYPE html>
    <html lang="fr">
        <head>
            <meta charset="UTF-8">
            <meta http-equiv="X-UA-Compatible" content="IE=edge">
            <meta name="viewport" content="width=device-width, initial-scale=1.0">
            <link rel="stylesheet" href="./styles/style.css">
            <title>MyProjet</title>
        </head>
        <body>
            <div id="formulaire">
                <form action="./pages/accueil.php" method="POST" id="formconnect">
                    <input type="text" placeholder="Identifiant" name="identifiant" class="compte" required>
                    <input type="password" placeholder="Mot de Passe" name="password" class="compte" required>
                    <div id="boutonconnect">
                        <input type="submit" value="Connexion" name="connexion" id="connexion">
                    </div>
                </form>
            </div>
        </body>
    </html>