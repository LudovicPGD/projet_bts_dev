<?php

    $prenom = (isset($_POST['Prenom']));
    $nom = (isset($_POST["Nom"]));
    $age = (isset($_POST["Age"]));

    $prenomv = 'Jean';
    $nomv = 'Guy';

    if($prenom == $prenomv){

        if($nom == $nomv){

            if($age <= 18){
                echo('<form action="troisieme.php" method="POST">
                <select name="pets" id="pet-select">
                                        <option value="">--Please choose an option--</option>
                                        <option value="dog">Dog</option>
                                        <option value="cat">Cat</option>
                                        <option value="hamster">Hamster</option>
                                        <option value="parrot">Parrot</option>
                                        </select>
                                        <input type="submit" name="submit" value="" required>
                </form>');
            }
        }
    }

?>
