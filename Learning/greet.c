#include <ctype.h>
//#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc,  char argv[])//void used to mean the program takes no arguments but now it takes arguments 
//char argv - the array (all the  words you type at the prompt)
//int argc  - the length of the array of strings (the collection of words the human typed in )
{
    printf("Hello %s \n ", argv[1]);

    if (argc == 2)
    {
        printf("Hello %s",argv[1]);
    }else
    {
        printf("Hello world ");
    }

}


//so we first run the make command then on the next command of ./ when we are calling our program 
//we have to add ./programname plus our argument 

//   make greet 
//   ./greet Elijah 

//then it will out put my name on the screen 










