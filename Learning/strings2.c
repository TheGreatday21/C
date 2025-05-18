#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    //strings use 4 bytes because c adds a \0 to take up one more byte to close the string
    //in particular printf knows that after a string when it sees the \0 it knows its the end of the string 
    //the \0 is called nul in C
    char name[] = "Elijah the Great ";
    char* name2 = "Is a good programmer";
    printf("Your name is %s %s\n", name,name2 );
    
    //char letter = 'A';
    //printf("%i \n",letter);//when you use the %i instead of c it prints the asci value of the character in the char variable 

    char Name[25];
    //getting the string length 
    printf("What is your name :\n");
    fgets(Name,sizeof(Name),stdin);
    Name[strcspn(Name, "\n")] = '\0';

    int number = strlen(Name);

    printf("%s is %d characters long  \n",Name,number);

    //An array of strings 

    char names[][15] = {"Elijah","Kaizzi","Lover","James","Shaila","Liland", "Stacy"};
    //use a loop to iterate through the array . Create  variables to get the size of the  array 
    int rows = sizeof(names)/ sizeof(names[0]);
    int columns = sizeof(names[0])/ sizeof(names[0][0]);

    for(int i =0; i < rows; i++)
    {
        for(int j = 0;  j< columns; j++)
        {
            printf("%c",names[i][j]);
    
        }
        printf("\n");
    }
}



























