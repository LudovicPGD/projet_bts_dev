#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int monstreatk(int enemie, int *dgt){

    int choixattaque;

    switch(enemie){
        case 1:

            printf("|==== Le Goblin choisi son attaque ====|\n\n");
            printf("1. Lance\n\n");
            printf("2. Griffe\n\n");
            printf("3. poing\n\n");

            srand(time(NULL));
            choixattaque = rand()%4 + 1;
            printf ("\n- Choix : %d", choixattaque);

            switch (choixattaque){
                case 1:
                    *dgt = 6;
                    printf("\n\nCroc !!!\n\n");
                    break;

                case 2:
                    *dgt = 3;
                    printf("\n\nSlash !!!\n\n");
                    break;

                case 3:
                    *dgt = 1;
                    printf("\n\nBoom !!!!\n\n");
                    break;

                default:
                    printf("\n\nAttaque rate !!!!!\n\n");
                    *dgt = 0;
                    break;
            }
            break;
        case 2:
            printf("|==== Le Loup choisi son attaque ====|\n\n");
            printf("1. Croc\n\n");
            printf("2. Griffe\n\n");
            printf("3. Charge\n\n");

            srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

            choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

            printf ("\n- Choix : %d", choixattaque);

            /* Choix des attaques */

            switch (choixattaque){
                case 1:
                    *dgt = 4;
                    printf("\n\nCroc !!!\n\n");
                    break;

                case 2:
                    *dgt = 5;
                    printf("\n\nSlash !!!\n\n");
                    break;

                case 3:
                    *dgt = 3;
                    printf("\n\nBoom !!!!\n\n");
                    break;

                default:
                    printf("\n\nAttaque rate !!!!!\n\n");
                    *dgt = 0;
                    break;
            }
            break;
        case 3:
            printf("|==== Le dragon choisi son attaque ====|\n\n");
            printf("1. Flamme\n\n");
            printf("2. Griffe\n\n");
            printf("3. Morsure\n\n");

            srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

            choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

            printf ("\n- Choix : %d", choixattaque);

            /* Choix des attaques */

            switch (choixattaque){
                case 1:
                    *dgt = 5;
                    printf("\n\nCrash !!!\n\n");
                    break;

                case 2:
                    *dgt = 7;
                    printf("\n\nSlash !!!\n\n");
                    break;

                case 3:
                    *dgt = 6;
                    printf("\n\nCroc !!!!\n\n");
                    break;

                default:
                    printf("\n\nAttaque rate !!!!!\n\n");
                    *dgt = 0;
                    break;
            }
            break;
    }
}