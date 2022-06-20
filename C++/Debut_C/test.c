#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 0;
    printf("Quel âge avez-vous ?\n");
    scanf("%d",&age);
    printf("oh vous avez donc %d ans", age);

    return 0;
}