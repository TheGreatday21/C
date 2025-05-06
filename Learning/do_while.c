#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    do 
    {
        printf("What is your number : \n");
        scanf("%d",&n);
    }
    while (n < 1);
// using a do while loop at this point to ensure that that input must be what we want for the input to move on 
// do this while this is happening 

    for(int i = 0 ; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

return 0;

}




























