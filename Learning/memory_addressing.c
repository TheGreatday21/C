#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
/*
    //a pointer is a type of data containing memory addresses on the physical memory of our pc 
    //Pointer can only store memory addresses of already existing variables 
    //Pointer can also have variable(pointer variables )
    int age = 23;
    //the pointer variable ought to have the same data type as the variable its storing memory address of 
    int * pAge = &age;
    //all pointer variables have to start with * p followed by the variable name here with first letter capital for easy referencing 
    
    printf("Value of age : %d\n",age);
    printf("Value of pAge : %d\n", *pAge);
    // *pAge is referred to as dereferencing a pointer 

    printf("memory address of age : %p\n",&age);
    printf("memory address of age in pAge: %p\n",pAge);
    
//pointers are used because they have general advantages which include:
//1. They are faster to run compared to actual variables 
//2. They are dynamically assigned in memory 
//3. They can be used in searching and sorting very large data 
//4. They can return more than one value from a function 

   // A string is actually  a pointer pointing to the first chcaracter of an array of characters 
    char * name = "Elijah";
    printf("This is a string : %s\n",name);
    printf("This is the address of the first character of the array : %p\n",name);
    //these two addresses are the same thats why 
    printf("This is the address of the first character of the array : %p\n",&name[0]);
    printf("This is the address of the first character of the array : %p\n",&name[1]);
*/
    //......................You cant directly assign strings to themselves because of addressing ..............

    char s[4] ;
    printf("s: ");
    fgets(s,10,stdin);
 /*   
    char* t = s;
    t[0] = toupper(t[0]);
    printf("s: %s \n",s);
    printf("t: %s \n",t); //the input is in lower case but the output is both in upper because both pointers are pointing to the same address in memory so the only way we can change this is by using another function in C called malloc - memory allocation 
//To allocate memory to the second string so that it can point to its own data 
*/
    char *t = malloc(strlen(s) + 1); //taking size of the variable we want to copy and ask for  memory of that size  from the system 
    //we have to account for when maybe a garbage value is passed in memory so we use an if statement . This is if malloc passes a null value . We dont want to copy to no memory like blindly touching memory
    if(t == NULL)
    {
        return 1;
    }
    for(int i =0,n = strlen(s); i<= n; i++)//we iterate till n because we also have to copy the last digit in the array 
    {
        t[i] = s[i];
    }//thi process is made easier using a function called strcpy(destination, source) ie strcpy(t,s);
    //if the user just presses enter we also have to account for it by writing a statement that only when a strings length is greater than 0 can we capitalize it. Cause we cant capitalize 0
   if (strlen(s) > 0)
   {
        t[0] = toupper(t[0]);
   }
    printf("s: %s \n",s);
    printf("t: %s \n",t);
    free(t); //its good practice to release the memory after we are done using it .


    return 0;
}

























