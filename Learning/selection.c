/*
//selection sort sudo code 

For i from 0 to n-1
Find smallest number between numbers[i] and numbers[n-1]
swap smallest number with numbers[i]
*/

#include <stdio.h>
#include <stdlib.h>


int main (void)
{

    int numbers[] = {2,1,0,3};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    printf("\nArray before sorting:");
    for (int j = 0; j < n; j++)
    {
        printf("%d,",numbers[j]);
    }
    
    printf("\n");


    //sorting algorithm 
    int min_index;
    for (int i = 0; i < n; i++)
    {
        
        for(int j = 0 ; j < n; j++)
        {
           
        }
        

        
    }
    
    
    printf("\nArray after sorting: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d,",numbers[k]);
    }
    
    printf("\n");


    return 0;
}













