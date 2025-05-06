#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    char name[10];
    printf("Before :");
    fgets(name, 10, stdin);
    name[strlen(name) - 1] = 0;
    printf("\nAfter :");
    /*
    //USING ASCII TABLE -32 FOR UPPERCASE 
    for (int i = 0 ; i <strlen(name); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')//this is how you check if a character is lowercase the arcane way 
        {
            printf("%c",name[i] - 32);//all uppercase letters are 32 behind there lowercase letters 
        }
        else{
            printf("%c",name[i]);
        }
    }
    printf("\n");
    */
    //USING A NEW LIBRARY ctype.h HAS INBUILT FUNCTIONS LIKE toupper
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c",toupper(name[i]));//if a character is already upper it just leaves it unchanged  
    }
    printf("\n");
    


}



//on the asci table every number is away from its respective case by just 32 
//              like A = 65 a = 98













