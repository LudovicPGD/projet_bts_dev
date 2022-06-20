<?php

class TriangleRectangle{
    private $longeur;
    private $largeur;
    private $hypotenus;
    
    public function __construct($name, $breed, $species, $feets){
        $this->longeur = $name;
        $this->largeur = $breed;
        $this->hypotenus = $species;
        $this->nbre_pattes = $feets;
    }
    
    public function getnom(){
        return $this->nom;
    }
    public function setnom($newnom){
        $this->nom = $newnom;
    }
    
}

?>