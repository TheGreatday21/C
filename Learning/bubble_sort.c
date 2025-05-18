/*
Bubble sort has a run time of O(n)

Return if no swaps
For i from 0 to n-1
if numbers[i]>numbers[i+1]
swap them 
*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    int numbers[] = {3,0,1,4,2};
    int n = sizeof(numbers)/ sizeof(numbers[0]);
    int low_index,high_index;
    
    

    for (int i = 0; i < n; i++ ) 
    {

        for (int j = 0; j < n-1; j++)
        {
            low_index = j;
            high_index = j+1;

            if (numbers[j] < numbers[j+1])
            {
                low_index = j;
                high_index = j+1;
                
            }
            else if (numbers[j] > numbers[j+1])
            {
                
                
            }
        
        }
        
      
    } 


    printf("\nArray after sorting: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d,",numbers[k]);
    }
    
    printf("\n");


}



































