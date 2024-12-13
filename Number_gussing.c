#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number,guess, attempts = 0;
    srand(time(0));
    number = rand() %100 + 1;
    printf("Welcome to number guessing game\n");
    printf("I have choosen a number between 1 -100, can you guess it:\n");

    do{
        printf("Enter your guess:");
        scanf("%d",&guess);
        attempts++;

        if(guess > number){
            printf("Too high,, try again:\n");
        }
        else if(guess<number){
            printf("Too low, try again:\n");
        }
        else if(guess == number){
            printf("congrats you have found it in %d attempts\n",attempts);
        }
        else{
            printf("Invalid input");
        }

    }
        while(guess != 0);
        return 0;
}