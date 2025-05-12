#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char strings [][15] = {"battleship","boot","canon","iron","thimble","top hat"};
    char string [15] ;
    
    printf("String : ");
    fgets(string,25,stdin);
    string[ strlen(string) - 1 ] = '\0';

    int n = sizeof(strings)/sizeof(strings[0]);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(strings[i], string) == 0)//we cannot directly compare the strings so we have to use a function in the string library called string compare 
       //strcmp gets the string in the array and compares it to the user input and makes sure the value is 0 on comparison i.e bar for bar
        {
            printf("Found \n");
            return 0;
        }

    }
    printf("Not found\n");
    return 1;

}














