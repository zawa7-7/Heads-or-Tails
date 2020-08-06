#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){

    char name[30];
    int i, heads = 0, tails = 0;

    srand((unsigned int)time(NULL));

    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin \n");

    for(i = 0; i < 3; i++){
        if(0 == rand() % 2){
            heads++;
            printf("Round %d : Heads\n", i + 1);
        }
        else{
            tails++;
            printf("Round %d: Tails\n", i + 1);
        }
    }

   if(heads > tails){
        printf("You won!\n");
    }
    else{
        printf("You lose!\n");
    }
    printf("Heads: %d , Tails : %d\n", heads , tails);

    return 0;

}