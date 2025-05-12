#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//we are going to create our own data types using structs 
//this is a real world application of the structs but later we will replace these with staff like databases 
struct person 
{
    char name[30];
    char number[30];
};


int main (void)
{

    struct person people[2];//creating an array called people  that will take only 2 items /arguments 
   
    strcpy(people[0].name,"David");
    strcpy(people[0].number,"+256788268631");

    strcpy(people[1].name,"Carter");
    strcpy(people[1].number,"+256782312332");

    
    char name[25];
    
    printf("Name: ");
    fgets(name,25,stdin);
    name[strlen(name) - 1] = '\0';

    //printf("%s\n ",people[0].number);

   // int n = sizeof(names)/sizeof(names[0]);

    for (int i = 0; i < 2 ; i ++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Number : %s \n",people[i].number);
            return 0;
        }

    }
    printf("Not found\n");
    return 1;

}




































