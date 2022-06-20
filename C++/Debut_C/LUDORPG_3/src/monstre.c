#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int monstre(int enemie, int *hp, int *xp){

    srand(time(NULL));
    enemie = rand()%4 + 1;
    
    switch(enemie){
        case 1:
            // Gobelin
            *hp = 10;
            *xp = 4;
            printf("\n\nUn Gobelin apparait !!!\n\n");
            break;

        case 2:
            // Loup
            *hp = 20;
            *xp = 6;
            printf("\n\nUn Loup apparait !!!\n\n");
            break;

        case 3:
            // dragon
            *hp = 30;
            *xp = 10;
            printf("\n\nUn Dragon apparait !!!\n\n");
            break;
    }
}