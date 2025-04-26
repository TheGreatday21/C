#include <stdio.h>
#include<stdlib.h>


int main(void)
{
    char firstname[10] ;//we set a maximum size for the array
    int age;
    char fullname[23];
    double height ;

    printf("How old are you :\n");
    scanf("%d",&age);//the &variable is called a pointer 

    printf("What is your current height in feet ? ");
    scanf("%lf", &height);
 
    printf("What is your first name?:\n ");
    scanf("%s", firstname);//with strings we do not need to make a pointer 

    printf("What is your full name :\n");
    fgets(fullname,25,stdin);
//fgets(variable name , string size here,standard input)
    
    printf("Hello, your first name is  %s and your full name is %s \n",firstname,fullname);
    printf("You are %d years old\n",age);
    printf("Your height is %f\n",height);
    return 0;
}

//scanf is used to receive user input 
//we have to precede the variable name with & 
//To get a line of text from the user we use fgets 













