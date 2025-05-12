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
    
    printf("Value of age : %d\n",age);
    printf("Value of pAge : %d\n", *pAge);//*pAge is referred to as dereferencing a pointer 

    printf("memory address of age : %p\n",&age);
    printf("memory address of age in pAge: %p\n",pAge);
    
//pointers are used because they have general advantages which include:
//1. They are faster to run compared to actual variables 
//2. They are dynamically assigned in memory 
//3. They can be used in searching and sorting very large data 
//4. They can return more than one value from a function 



    return 0;
}

























