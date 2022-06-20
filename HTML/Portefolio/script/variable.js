document.getElementById("ecole").style.display="none";
document.getElementById("entreprise").style.display="none";
document.getElementById("projet").style.display="none";

function accueil() {
    document.getElementById("presentation").style.display="block";
    document.getElementById("ecole").style.display="none";
    document.getElementById("hdr").style.display="block";
    document.getElementById("entreprise").style.display="none";
    document.getElementById("projet").style.display="none";
  }

  function ecole() {
    document.getElementById("presentation").style.display="none"
    document.getElementById("ecole").style.display="block";
    document.getElementById("hdr").style.display="none";
    document.getElementById("entreprise").style.display="none";
    document.getElementById("projet").style.display="none";
  }

  function entreprise() {
    document.getElementById("presentation").style.display="none"
    document.getElementById("ecole").style.display="none";
    document.getElementById("hdr").style.display="none";
    document.getElementById("entreprise").style.display="block";
    document.getElementById("projet").style.display="none";
  }

  function projet() {
    document.getElementById("presentation").style.display="none"
    document.getElementById("ecole").style.display="none";
    document.getElementById("hdr").style.display="none";
    document.getElementById("entreprise").style.display="none";
    document.getElementById("projet").style.display="block";   
}