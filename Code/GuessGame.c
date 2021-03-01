#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int target;
    int guess;

    srand(time(NULL));
    target = rand() % 1000 + 1;

    printf("Guess between 1 and 1000\n");

    for(int i = 0; i < 20; i++){
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > 0 && guess <= 1000){
            if(target > guess){
                printf("Higher \n");
            } 
            if(target < guess){
                printf("Lower \n");
            }
            if(target == guess){
                printf("Got it! \n");
                break;
            }
        } else{
            printf("Please enter a number between 1 and 1000.\n");
            continue;
        }
    }

    return 0;
}