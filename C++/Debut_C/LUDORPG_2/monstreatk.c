#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int monstreATK(int enemie){

int choixattaque;
int dgt;

switch (enemie){
    case 1:
        // Gobelin

        printf("|==== Le Goblin choisi son attaque ====|\n\n");
        printf("1. Lance\n\n");
        printf("2. Griffe\n\n");
        printf("3. poing\n\n");

        srand(time(NULL)); // Reinitialise le compteur aleatoire à 0

        choixattaque = rand()%4 + 1; // Donne un chiffre aleatoire entre 1 et 4

        printf ("\n- Choix : ");
        printf("%d", choixattaque);

            if(choixattaque = 1){
                dgt = 6;
                printf("\n\nCroc !!!\n\n-%d HP\n\n", dgt);
                break;
            }
            if(choixattaque = 2){
                dgt = 3;
                printf("\n\nSlash !!!\n\n-%d HP2\n\n", dgt);
                break;
            }
            if(choixattaque = 3){
                dgt = 1;
                printf("\n\nBoom !!!!\n\n-%d HP\n\n", dgt);
                break;
            }
            if(choixattaque > 3){
                printf("\n\nAttaque rate !!!!!\n\n");
                dgt = 0;
                break;
        }

    case 2:
        // Loup
        
        break;

    case 3:
        // Blop
     
        break;

    case 4:
        // Zombie
   
        break;

    case 5:
        // dragon
    
        break;
}

}