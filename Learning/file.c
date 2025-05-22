#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//using the file functions of stdlib
/*
fopen - opening a file 
fclose - closing a file
fscanf
fprintf - printing to a file 
fread
fwrite
fseek
*/
//You have to always check if pointers are valid always because if they are null bad things can happen 
int main(void)
{
//Creating a file (csv - comma separated values)
    FILE *file = fopen("phonebook.csv", "a"); //"w" write mode "a" append to file 

    if(file == NULL)
    {
        return 1;
    }
    //getting input from the user and adding it to the file 
    char name[10];
    char number[17];

    printf("Name: ");
    fgets(name, 10,stdin);
    printf("number: ");
    fgets(number, 17,stdin);

    fprintf(file, "%s,%s\n",name ,number);
    fclose(file);



}








