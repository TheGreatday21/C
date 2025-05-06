#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

    //a pointer is a type of data containing memory addresses on the physical memory of our pc 
    //Pointer can only store memory addresses of already existing variables 
    //Pointer can also have variable(pointer variables )
    int age = 23;
    //the pointer variable ought to have the same data type as the variable its storing memory address of 
    int * pAge = &age;
    //all pointer variables have to start with * p followed by the variable name here with first letter capital for easy referencing 
    

    //printf("this is the variable age's value memory address : %p\n", &age);
    printf("%p",pAge);





    return 0;
}

























