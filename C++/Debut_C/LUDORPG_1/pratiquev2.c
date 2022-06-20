#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

// Variable

int pointDeVie = 20;
int tesPointDeVie = 20;

int dgt = 0;
int soin = 0;

int choixattaque;

// Affichage des HP

printf("\n-------- Tu as %d HP --------\n\n", tesPointDeVie);

printf("\n----- L'ennemie a %d HP -----\n\n\n", pointDeVie);

// Début des choix

while (pointDeVie > 0 && tesPointDeVie > 0){

// Ton personnage

printf("|==== Choisi ton Attaque ====|\n\n");
printf("1. Epee\n\n");
printf("2. Flamme\n\n");
printf("3. Soin\n");

printf ("\n- Choix : ");
scanf("%d", &choixattaque);

/* Choix des attaques */

switch (choixattaque){
    case 1:
        dgt = 4;
        printf("\n\nSlash !!!\n\n-%d HP\n\n\n", dgt);
        break;

    case 2:
        dgt = 6;
        printf("\n\nBoom !!!\n\n-%d HP\n\n\n", dgt);
        break;

    case 3:
        soin = 4;
        printf("\n\nRegeneration !!!!\n\n+%d HP\n\n\n", soin);
        dgt = 0;
        break;

    default:
        dgt = 0;
        printf("\n\nAttaque rate !!!!!\n\n\n");
        break;
}

pointDeVie = pointDeVie - dgt;
tesPointDeVie = tesPointDeVie + soin;

/* Affichage des HP restant de l'ennemie */

printf("======- L'enemie a %d HP restant -======\n\n\n", pointDeVie);

// Ennemie

if(pointDeVie > 0 && tesPointDeVie > 0){

printf("|==== L'enemie choisi son Attaque ====|\n\n");
printf("1. Croc\n\n");
printf("2. Griffe\n\n");
printf("3. Charge\n\n");

srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

printf ("\n- Choix : ");
printf("%d", choixattaque);

/* Choix des attaques */

switch (choixattaque){
    case 1:
        dgt = 4;
        printf("\n\nCroc !!!\n\n-%d HP\n\n", dgt);
        break;

    case 2:
        dgt = 5;
        printf("\n\nSlash !!!\n\n-%d HP2\n\n", dgt);
        break;

    case 3:
        dgt = 3;
        printf("\n\nBoom !!!!\n\n-%d HP\n\n", dgt);
        break;

    default:
        printf("\n\nAttaque rate !!!!!\n\n");
        dgt = 0;
        break;
}

tesPointDeVie = tesPointDeVie - dgt;

/* Affichage de tes HP restant */

printf("=====- Tu as %d HP restant -=====\n\n\n", tesPointDeVie);

}
}

// Fin de partie

if(pointDeVie <= 0){
    printf("Tes vraiment trop fort, ta gagner !!!!\n\n");
}
else{
    printf("Tu es giga nul, ta perdu !!!!\n\n");
}

return 0;
}

