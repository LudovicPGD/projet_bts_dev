#include <stdio.h>
#include <stdlib.h>
#include "monstrehp.c"
#include "monstreatk.c"

int main(){

    int choix = 0;
    int choixATK = 0;
    int enemie = 0;
    int PVenemie = 0;
    int tesPointDeVie = 20;
    int dgt = 0;
    int soin = 0;

    while(tesPointDeVie > 0){

        srand(time(NULL));

        // enemie = rand()%5 + 1;
        enemie = 1;

        PVenemie = monstreHP(enemie);       

        while (tesPointDeVie > 0 && PVenemie > 0){

            if (tesPointDeVie > 0 && PVenemie > 0){
            
            // Ton personnage
                printf("\n|==== Choisi ton Attaque ====|\n\n");
                printf("1. Epee\n\n");
                printf("2. Flamme\n\n");
                printf("3. Soin\n");

                printf ("\n- Choix : ");
                scanf("%d", &choix);

                /* Choix des attaques */
                switch (choix){
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

                PVenemie = PVenemie - dgt;
                tesPointDeVie = tesPointDeVie + soin;

                /* Affichage des HP restant de l'ennemie */

                printf("======- L'enemie a %d HP restant -======\n\n", PVenemie);
                printf("----------------------------------------\n\n\n");
            }

            if(tesPointDeVie > 0 && PVenemie > 0){
                
                scanf("%d", dgt);

                dgt = monstreATK(enemie);
                
                tesPointDeVie = tesPointDeVie - dgt;
            }
            
        }
    } 
    return 0;
}