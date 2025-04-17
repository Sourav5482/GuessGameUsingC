#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    int random, guess;
    int noOfGuess = 0;
    int level,highValue,limit;
    printf("Please select a level (1 to 3): ");
    
    if (scanf("%d", &level) != 1) {
        printf("Invalid input! \nPlease enter a valid number next time.\n\n");
        printf("Thanks for playing the guessing game\n\n");
    printf("Developed by Sourav Das\n");
        exit(0);
    } else 
        printf("You selected level %d\n", level);
    if(level==3){
    highValue=500;
    limit=15;
    }else if(level==2){
    highValue=100;
    limit=10;
    }
    else if(level==1){
    highValue=50;
    limit=8;
    }else{
    highValue=800;
    limit=25;
    }
    printf("You have %d limits\n",limit);
    
    srand(time(0));
    random = rand() % highValue + 1;

    do {
        printf("Enter your guess between 1 and %d >>\n", highValue);
        if (scanf("%d", &guess)!=1){
         printf("Invalid input!\nPlease enter a valid number next time.\n");
         break;
        }
        noOfGuess++;

        if (guess == random) {
            printf("Hurray! You have successfully won the game\n");
            printf("You guessed it in %d tries\n\n", noOfGuess);
            break; 
        }

        if (noOfGuess > 9) {
            printf("You gave 10 wrong guesses\n\n");
            break;
        }

        if (guess < random)
            printf("Hint: Enter a higher number\n\n");
        else if (guess > random)
            printf("Hint: Enter a lower number\n\n");

    } while (1);

    printf("Thanks for playing the guessing game\n\n");
    printf("Developed by Sourav Das\n");
}#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    int random, guess;
    int noOfGuess = 0;
    int level,highValue,limit;
    printf("Please select a level (1 to 3): ");
    
    if (scanf("%d", &level) != 1) {
        printf("Invalid input! \nPlease enter a valid number next time.\n\n");
        printf("Thanks for playing the guessing game\n\n");
    printf("Developed by Sourav Das\n");
        exit(0);
    } else 
        printf("You selected level %d\n", level);
    if(level==3){
    highValue=500;
    limit=15;
    }else if(level==2){
    highValue=100;
    limit=10;
    }
    else if(level==1){
    highValue=50;
    limit=8;
    }else{
    highValue=800;
    limit=25;
    }
    printf("You have %d limits\n",limit);
    
    srand(time(0));
    random = rand() % highValue + 1;

    do {
        printf("Enter your guess between 1 and %d >>\n", highValue);
        if (scanf("%d", &guess)!=1){
         printf("Invalid input!\nPlease enter a valid number next time.\n");
         break;
        }
        noOfGuess++;

        if (guess == random) {
            printf("Hurray! You have successfully won the game\n");
            printf("You guessed it in %d tries\n\n", noOfGuess);
            break; 
        }

        if (noOfGuess > 9) {
            printf("You gave 10 wrong guesses\n\n");
            break;
        }

        if (guess < random)
            printf("Hint: Enter a higher number\n\n");
        else if (guess > random)
            printf("Hint: Enter a lower number\n\n");

    } while (1);

    printf("Thanks for playing the guessing game\n\n");
    printf("Developed by Sourav Das\n");
}
