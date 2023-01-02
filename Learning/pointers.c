#include <stdio.h>

int main (void)
{
  /*
    //a) pointers are variables that point to the addresses of already existing variables

    //A pointer has to have the same data type as the variable its pointing to 
    //Different data types are assigned different amounts of memory in the computer
    //int - 4bytes (32bits)
    //char - 1 byte (8bits)
    //float - 4bytes (32bits)
    //double - 8 bytes(64bits)
    
    int a = 10;
    int* p ; //have created an integer pointer 
    p = &a; //assign that integer pointer the address of an integer variable
    printf("Address of a : %p\n",&a);
    printf("Address of a : %p\n",p); //so these print the addresses of the integer in memory

    //if we want to see the value of a pointer we dereference the pointer using the * symbol
    printf("Value of a : %d\n",a);
    printf("Value of a : %d\n",*p);

    //we can change the value of an integer using its pointer
    int b = 20;
    *p = b;//this means that the value pointed at by p becomes what is stored in b
    //in this case the address does not change because p is still pointing to the address of variable a
    printf("Address of a : %p\n",p);
    printf("Value of a : %d\n",*p); 
                      ///pointers cannot be assigned to pointers of a different data type .///
*/
/*
    //b) pointers can also have arithmetic done on them 
    int j = 54;
    int* p0 ;
    p0 = &j;

    printf("Address of j : %p\n",p0);
    printf("Address of (p0 + 1) : %p\n",p0+1);//in this case we are adding 1 int space to the pointer p0. That means the address will vary by 4 bytes since its integers being pointed to 
    
    //Address of j : 0x7ff7b84523d8     The difference between theses two is 4 because add 4 to 0x8 we get 0xc
    //Address of (p0 + 1) : 0x7ff7b84523dc
    //since the value at p0+1 has no assigned value to it the value will be a garbage value 
    
    printf("Value pointed at by p0  : %d\n",*p0);
    printf("Value pointed at by p0+1  : %d\n",*(p0+1));

*/

    //There is alo a type of pointers referred to as void pointers 
    
























    return 0;

}
