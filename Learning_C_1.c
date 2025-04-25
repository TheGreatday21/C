#include <stdio.h> //standard input output 
#include <stdlib.h> //standard library 
//these are libraries containing most of our used functions for our current programs 

//this is a normal function to output information in our terminal . 
/*   .1.
int main(void)
{
    printf("I like to code \n , its really good \n ");    
    return 0;
}

*/
int main(void)
{
    /*
    type variable_name = value ;

- char (single character), 
- int(numerical whole number )
- float(decimal point numbers )
- char [](contains multiple characters called strings  )
    */
//1. You can also declare a variable without a value 
    int age; //integer 
    age = 12;
    char grade = 'A'; //single character 
    char name[] = "Kawooma";//string 
    float height = 5.10; //decimal values

    printf("You are %i years old  \n",age);
    printf("You height is %f feet \n",height);
    printf("Your name is %s\n",name);
    printf("And your average grade is %c\n",grade);
}







