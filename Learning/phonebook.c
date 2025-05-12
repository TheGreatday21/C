#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main (void)
{

    char  names [][23] = {"Carter","David"};
    char numbers[][30] = {"+256787106109","+256757886106"};
    char name[25];
    
    printf("Name: ");
    fgets(name,25,stdin);
    name[strlen(name) - 1] = '\0';

    int n = sizeof(names)/sizeof(names[0]);

    for (int i = 0; i < n ; i ++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Number : %s \n",numbers[i]);
            return 0;
        }
        

    }
    printf("Not found\n");
    return 1;

}














