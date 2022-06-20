<?php
session_start();
?>

<body>

<form method="POST" style="margin: auto; width: 220px;">
    <input type="text" value="" name="user"><br><br>
    <input type="text" value="" name="mdp"><br><br>
    <input type="submit" value="connexion" name="login">
</form>

<?php 
$user = isset($_POST['user']);
echo $user;
$mdp = isset($_POST['mdp']);

echo $user;
?>
    <form method="POST">
        <input type="submit" value="Detruire" name="detruire">
    </form>
    <form action="" method="POST" style="margin: auto; width: 220px;">
        <input type="text" placeholder="Nom" name="nom"><br><br>
        <input type="text" placeholder="Prenom" name="prenom"><br><br>
        <input type="email" placeholder="mail" name="mail"><br><br> 
        <input type="submit" value="connexion"><br><br>
    </form>
<br><br><br><br>

<?php
if(isset($_POST) && !empty($_POST)){

      $nom = htmlspecialchars($_POST['nom']);
      $prenom = htmlspecialchars($_POST['prenom']);
      $email = htmlspecialchars($_POST['mail']);
      
      $conn = [$nom, $prenom, $email];

    if($conn){
        
            $id = count($_SESSION);
            $_SESSION['user'.$id] = $conn;
            header('Location: index.php');
    }
}
?>

<table border='3px'>
<?php if(!empty($_SESSION)):?>   
<?php foreach ($_SESSION as $row => $value):?>

    <tr>
        <td><?= $value[0] ?></td>
        <td><?= $value[1] ?></td>
        <td><?= $value[2]?></td>
        <td><a href="supp.php?id=<?= $row?>">Supprimer</a></td>
        <td><a href="modif.php?id=<?= $row?>">Modifier</a></td>
    </tr>

<?php endforeach; ?>
<?php endif; ?>

</table>

<?php
            if(isset($_POST['detruire'])){
                session_start();
                print_r($_SESSION);
                session_destroy();
                header('Location: index.php');  
            }
    
?>
</body>