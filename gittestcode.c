#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){

    int i, heads = 0, tails = 0;

    srand((unsigned int)time(NULL));

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

    printf("Heads: %d , Tails : %d\n", heads , tails);


    return 0;

}