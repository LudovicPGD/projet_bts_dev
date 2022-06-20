#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "monstre.c"
#include "monstreatk.c"

int main(){

    int enemie = 0;
    int PvEnemie = 0;
    int TPv = 20;
    int TPvMax = 20;
    int Lv = 0;
    int xp = 0;
    int xpLv = 0;
    int xpLvMax = 10;
    int dgt = 0;
    int soin = 0;
    int choixattaque = 0;

    while(TPv > 0){
        enemie = 0;
        monstre(enemie, &PvEnemie, &xp);

        while(PvEnemie > 0){
            printf("\n-------- Tu est niveau %d --------\n", Lv);
            printf("\nTu es a %d/%d avant le niveau suivant\n", xpLv, xpLvMax );
            printf("\n---------- Tu as %d HP ----------\n\n\n", TPv);

            while (PvEnemie > 0 && TPv > 0 ){
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
                PvEnemie = PvEnemie - dgt;
                TPv = TPv + soin;
            
                /* Affichage des HP restant de l'ennemie */

                printf("======- L'enemie a %d HP restant -======\n\n", PvEnemie);
                printf("----------------------------------------\n\n");

                if(PvEnemie > 0 && TPv > 0){
                    monstreatk(enemie, &dgt);

                    TPv = TPv - dgt;

                    printf("=====- Tu as %d HP restant -=====\n\n", TPv);
                    printf("----------------------------------------\n\n");
                }
                if(PvEnemie <= 0){
                    printf("Tes vraiment trop fort, ta gagner !!!!\n\n");
                    xpLv = xpLv + xp;
                    if(xpLv >= xpLvMax){
                        Lv++;
                        xpLvMax = xpLvMax * 2;
                        xpLv = 0;
                        TPvMax = TPvMax + 2;
                        TPv = TPvMax;
                        xp = 0;
                    }
                    printf("Tu as gagner %d Xp\n\n", xp);
                }
                else{
                    printf("Tu es giga nul, ta perdu !!!!\n\n");
                }
                printf("----------------------------------------\n");
            }
            // Fin de combat et Lv
        }    
    }
    return 0;
}
