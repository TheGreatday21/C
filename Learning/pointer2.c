#include <stdio.h>
#include <stdlib.h>


void  add(int *a);

int main (void)
{


    int a[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4; 
    a[4] = 5;    

    int *p;
    
    for (int i = 0; i < 5; i++)
    {
        p = &a[i];
        printf("%d ", *(p));
    }
    
    
}
























