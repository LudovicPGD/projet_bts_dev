#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int pointDeVie = 20;

printf("\n<----- L'ennemie a %d HP ----->\n\n", pointDeVie);

int choixattaque;

printf("<==== Choisi ton Attaque ====>\n\n");
printf("1. Epee\n");
printf("2. Magie\n");
printf("3. Coup de poing\n\n");


int dgt = 0;
int resultat = 0;

while (pointDeVie > 0){

printf ("\n- Choisi : ");
scanf("%d", &choixattaque);

switch (choixattaque){
    case 1:
        printf("\n\nSlash !!!\n\n");
        dgt = 4;
        break;

    case 2:
        printf("\n\nBoom !!!\n\n");
        dgt = 6;
        break;

    case 3:
        printf("\n\nPas tres efficace !!!!\n\n");
        dgt = 1;
        break;

    default:
        printf("\n\nAttaque rate !!!!!\n\n");
        break;
}
return 0;
}