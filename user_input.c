#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void)
{
    char firstname[10] ;//we set a maximum size for the array
    int age;
    char fullname[25];
    double height ;

    printf("How old are you :\n");
    scanf("%d",&age);//the &variable is called a pointer 

    printf("What is your current height in feet ? ");
    scanf("%lf", &height);
 
    printf("What is your first name?:\n ");
    scanf("%s", firstname);//with strings we do not need to make a pointer 
//we have to ensure that fgetc is placed after the scanf so that it grabs the \n not grabbed by the scanf function 
    fgetc(stdin);
    printf("What is your full name :\n");
    fgets(fullname, 25 ,stdin);
//fgets(variable name , string size here,standard input)
//the fgets function will also grab the space so to remove the space we use the following command after 
    //variablename[strlen(variable name) -1 = 0; This can only be used if the library of <string.h>  is also called 
    fullname[strlen(fullname) - 1 ] = 0;
    
    printf("\nHello, your full name is %s \n",fullname);
    printf("You are %d years old\n",age);
    printf("Your height is %f\n",height);
    return 0;
}

//scanf is used to receive user input . It only grabs characters up to the first white space 
//we have to precede the variable name with & 
//To get a line of text from the user we use fgets 













