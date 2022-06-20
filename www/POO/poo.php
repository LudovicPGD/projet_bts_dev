<?php

class Animaux{
    private $nom;
    private $race;
    private $espece;
    private $nbre_pattes;
    
    public function __construct($name, $breed, $species, $feets){
        $this->nom = $name;
        $this->race = $breed;
        $this->espace = $species;
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