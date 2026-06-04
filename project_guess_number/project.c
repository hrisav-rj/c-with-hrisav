#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int random_number, guessed, no_of_guesses;
    srand(time(0));
    random_number = rand() % 100 + 1;

    do {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed>random_number){
            printf("Lower!!!\n");
        }
        else {
            printf("Higher!!!\n");
        }
        if (guessed == random_number){
            break;
        }
        no_of_guesses++;

    }while (guessed != random_number);
    
    printf("You have guessed in %d chances!\n", no_of_guesses);
    
    return 0;
}