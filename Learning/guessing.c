#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{   
    double i = 2;
    double guess;
    int guess_count = 0;
    int guess_limit = 4;
    int out_of_guesses = 0;

    printf("Guess the favorite number : \n");
    scanf("%lf", &guess);

    while (guess != i && out_of_guesses == 0)
    {   
        if (guess_count < guess_limit){
            printf("Guess the favorite number : \n");
            scanf("%lf", &guess);
        }
        else
        {
            out_of_guesses = 1;
        }        
        guess_count ++;
    }
    if(out_of_guesses == 1)
    {
        printf("You are out of guesses \n");
    }else{
        printf("You win \n");
    }
return 0;

}

















