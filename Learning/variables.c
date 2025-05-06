#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//This is the use of variables in c 
int main(void)
{
    /*
   (syntax) type variable_name = value ;

- char (single character), 
- int(numerical whole number )
- float(decimal point numbers )
- char [](contains multiple characters called strings  )
- bool (contains true or false values )

*/  

//1. You can also declare a variable without a value 
    int age; //integer 
    age = 12;
    char grade = 'A'; //single character 
    char name[] = "Kawooma";//string 
    float height = 5.10; //decimal values
    double pie = 3.2133453463747427645252;//longer float number
    bool gender = true; //boolean value 

    printf("You are %i years old  \n",age);
    printf("You height is %f feet \n",height);
    printf("Your name is %s\n",name);
    printf("And your average grade is %c\n",grade);
    printf("Are you male?: %d\n",gender);
    printf("Did you know that %.13f is how long part 1 of pie is!\n",pie);
    return 0;
}
//Doubles are the longer versions of floats and they can store over 64bits
//Floats can only store values to 8bytes/32 bits of memory     
//we use %d for booleans like integers and the output is a 1 for true and a 0 for false
//we use the %f for doubles as well and to specify the length of the decimals we add the .number to the %f(%.12f)
//the char data type can store numbers from -128 to 127 and uses the %d or %c specifiar
//to work with booleans we have to include the library stdio.bool in our code 


/*these are the commonest types of format specifiers 

%c - character
%d - integer
%f - float
%lf - double
%s - string

%- - left align 

%.5 - decimal precision 
%1 - minimum field width 
*/

//we can turn variables into constant by preceding the variable type with the text 'const'



