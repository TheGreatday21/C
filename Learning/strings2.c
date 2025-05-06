#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    //strings use 4 bytes because c adds a \0 to take up one more byte to close the string
    //in particular printf knows that after a string when it sees the \0 it knows its the end of the string 
    //the \0 is called nul in C
    char name[] = "Elijah the Great ";
    printf("Your name is %s\n", name );
    
    //char letter = 'A';
    //printf("%i \n",letter);//when you use the %i instead of c it prints the asci value of the character in the char variable 

    char Name[25];
    //getting the string length 
    printf("What is your name :\n");
    fgets(Name,25,stdin);
    Name[strlen(Name) - 1] = 0;
    int number = strlen(Name);

    printf("%s is %d characters long  \n",Name,number);


}



























