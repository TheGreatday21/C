///to use random numbers in c we have to use the stdlib and time library for us to be able to 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(void)
{

    srand(time(0));   //serial random(time function passing null argument )
    //this is necessary whenever we are to generate any random values
    //after that we can call  variable to hold the random value

    while(1)
    {
        int random_number = rand() % 4  ;  //the computer automatically start sgenerating characters from 0  - 32720 but to give it our range we have to use the modulus sign and where it will stop but not through.
        //this will generate numbers from 0,1,2,3 but not 4 to add four we add a 1 to the function (rand() %4) + 1
        printf("%d \n",random_number);
        sleep(1);
        system("clear"); //to clear the console screen on every new iteration 
    }

}













