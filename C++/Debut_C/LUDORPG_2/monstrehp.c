#include <stdio.h>
#include <stdlib.h>

int monstreHP(int enemie){

int hp;

switch (enemie){
    case 1:
        // Gobelin
        hp = 10;
        printf("\n\nUn Gobelin apparait !!!\n\n");
        break;

    case 2:
        // Loup
        hp = 20;
        printf("\n\nUn Loup apparait !!!\n\n");
        break;

    case 3:
        // Blop
        hp = 5;
        printf("\n\nUn Blop apparait !!!\n\n");
        break;

    case 4:
        // Zombie
        hp = 15;
        printf("\n\nUn Zombie apparait !!!\n\n");
        break;

    case 5:
        // dragon
        hp = 30;
        printf("\n\nUn Dragon apparait !!!\n\n");
        break;
}

return hp;
}