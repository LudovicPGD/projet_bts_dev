<?php
require('oop.php');

$premieranimal = new Animaux ('Scooby', 'chien', 'mamifere', 4);
echo ($premieranimal->getnom());
$premieranimal->setnom('Julien');
echo('<br>'.$premieranimal->getnom());

?>