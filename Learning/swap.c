#include <stdio.h>
#include <stdlib.h>

void swap(int *a , int *b);
int main (void)
{
    int x = 1;
    int y = 2;

    printf("x is %d, y is %d \n",x,y);
    swap(&x,&y);//In swap the argument passed have to be the addresses of integers
    printf("x is %d, y is %d \n",x,y);


}

//this is correct logic but it would not work on the variables in main because of scope .
//so the only way to get it working is by using pointers 
/*
void swap(int a , int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
*/

void swap(int *a , int *b) //assign two pointers pointing to 2 integers 
{
    int tmp = *a;//dereference the pointer a to assign the value at the address in tmp
    *a = *b; //the value at the address of b will equal to the value of the address at a
    *b = tmp; //The value at the address of b will equal to the value stored in tmp
}



