#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("WELCOME TO THE EPIC NUMBER GUESSING GAME\n");
    random= rand() % 100 + 1;//generates number between 0 to 100 and +1 is to avoid generation of 0


    do{
        printf("ENTER YOUR NUMBER(1 TO 100):- ");
        scanf("%d", &guess);
        no_of_guess++;// tells how many guesses user taken to guess the number

        if(guess < random) {
            printf("GUESS A LARGER NUMBER.\n");
        } else if(guess > random) {
            printf("GUESS A SMALLER NUMBER.\n");
        } else {
            printf("CONGRATULATIONSSSS!!! YOU GUESSED ABSOLUTELY CORRECT NUMBER IN %d ATTEMPTS\n", no_of_guess);
        }
    }while(random != guess);

    printf("THANKYOU FOR PLAYING EPIC WORD,BYE BYE\n");
    printf("DEVELOPED BY:- PRANESH PRAVIN BORA\n");




}