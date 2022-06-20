#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

// Variable

int pointDeVie = 0;
int tesPointDeVie = 20;

int mana = 10;

int tpv = 20;
int dgt = 0;
int soin = 0;
int duel = 0;
int Lv = 0;
int xp = 0;
int xpLv = 0;
int xpLvMax = 10;

int choixattaque;

while(tesPointDeVie >= 0){

srand(time(NULL));

int enemie = rand()%3 + 1;

// Choix de l'enemie

switch (enemie){
    case 1:
        // Gobelin
        duel = 1;
        pointDeVie = 10;
        xp = 4;
        printf("\n\nUn Gobelin apparait !!!\n\n");
        break;

    case 2:
        // Loup
        duel = 2;
        pointDeVie = 20;
        xp = 6;
        printf("\n\nUn Loup apparait !!!\n\n");
        break;

    case 3:
        // dragon
        duel = 3;
        pointDeVie = 30;
        xp = 10;
        printf("\n\nUn Dragon apparait !!!\n\n");
        break;
}

// Affichage des HP et Niv
printf("\n->\n");
printf("\n-------- Tu est niveau %d --------\n", Lv);
printf("\nTu es a %d/%d avant le niveau suivant\n", xpLv, xpLvMax );
printf("\n---------- Tu as %d HP ----------\n\n", tesPointDeVie);

printf("\n->\n");
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
        dgt = 60;
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

printf("======- L'enemie a %d HP restant -======\n\n", pointDeVie);
printf("----------------------------------------\n\n\n");

// Ennemie

if(pointDeVie > 0 && tesPointDeVie > 0){

/*Goblin*/

if(duel == 1){
printf("|==== Le Goblin choisi son attaque ====|\n\n");
printf("1. Lance\n\n");
printf("2. Griffe\n\n");
printf("3. poing\n\n");

srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

printf ("\n- Choix : ");
printf("%d", choixattaque);

/* Choix des attaques */

switch (choixattaque){
    case 1:
        dgt = 6;
        printf("\n\nCroc !!!\n\n-%d HP\n\n", dgt);
        break;

    case 2:
        dgt = 3;
        printf("\n\nSlash !!!\n\n-%d HP2\n\n", dgt);
        break;

    case 3:
        dgt = 1;
        printf("\n\nBoom !!!!\n\n-%d HP\n\n", dgt);
        break;

    default:
        printf("\n\nAttaque rate !!!!!\n\n");
        dgt = 0;
        break;
}

tesPointDeVie = tesPointDeVie - dgt;

/* Affichage de tes HP restant */

printf("=====- Tu as %d HP restant -=====\n\n", tesPointDeVie);
printf("----------------------------------------\n\n\n");
}

/*Loup*/

if(duel == 2){
printf("|==== Le Loup choisi son attaque ====|\n\n");
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

printf("=====- Tu as %d HP restant -=====\n\n", tesPointDeVie);
printf("----------------------------------------\n\n\n");
}

/*Dragon*/

if(duel == 3){
printf("|==== Le dragon choisi son attaque ====|\n\n");
printf("1. Flamme\n\n");
printf("2. Griffe\n\n");
printf("3. Morsure\n\n");

srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

printf ("\n- Choix : ");
printf("%d", choixattaque);

/* Choix des attaques */

switch (choixattaque){
    case 1:
        dgt = 5;
        printf("\n\nCrash !!!\n\n-%d HP\n\n", dgt);
        break;

    case 2:
        dgt = 7;
        printf("\n\nSlash !!!\n\n-%d HP2\n\n", dgt);
        break;

    case 3:
        dgt = 6;
        printf("\n\nCroc !!!!\n\n-%d HP\n\n", dgt);
        break;

    default:
        printf("\n\nAttaque rate !!!!!\n\n");
        dgt = 0;
        break;
}

tesPointDeVie = tesPointDeVie - dgt;

/* Affichage de tes HP restant */

printf("=====- Tu as %d HP restant -=====\n\n", tesPointDeVie);
printf("----------------------------------------\n\n");
}
}
}

// Fin de combat et Lv

if(pointDeVie <= 0){
    printf("Tes vraiment trop fort, ta gagner !!!!\n\n");
    xpLv = xpLv + xp;
    if(xpLv >= xpLvMax){
        Lv++;
        xpLvMax = xpLvMax * 2;
        xpLv = 0;
        tpv = tpv + 2;
        tesPointDeVie = tpv;
    }
    printf("Tu as gagner %d Xp\n\n", xp);
}
else{
    printf("Tu es giga nul, ta perdu !!!!\n\n");
}
printf("----------------------------------------\n");
}
return 0;
}

