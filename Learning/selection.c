/*
//selection sort sudo code 

For i from 0 to n-1
Find smallest number between numbers[i] and numbers[n-1]
swap smallest number with numbers[i]
*/

#include <stdio.h>
#include <stdlib.h>

//void selectionSort(int array[], int length);
int main (void)
{

    int numbers[] = {5,9,2,8,6,1,4,0,3,7};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    printf("\nArray before sorting:");
    for (int j = 0; j < n; j++)
    {
        printf("%d,",numbers[j]);
    }
    
    printf("\n");


    //sorting algorithm 
    //selectionSort(numbers,n);
    for (int i = 0; i < n - 1; i++)//this iterates till n-1 because the last element at the end will be alone anyways (sorted by default)
    {
        int min_index = i;
        
        for(int j = i+1; j < n; j++)//j is equal to i+1 because we are looking at the next index in the array 
        {
            if(numbers[j] < numbers[min_index])
            {
                min_index = j;
            }
           
        }
        if (min_index != i)//if the minimum index is nolonger the one at i we carry out the classic swap technic on the variables 
        {
           int temp = numbers[i];
          numbers[i] = numbers[min_index];
          numbers[min_index]  = temp;
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


/*
void selectionSort(int array[], int length)
{
        
    for (int i = 0; i < length - 1; i++)//this iterates till n-1 because the last element at the end will be alone anyways (sorted by default)
    {
        int min_index = i;
        
        for(int j = i+1; j < length; j++)//j is equal to i+1 because we are looking at the next index in the array 
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
           
        }
        if (min_index != i)//if the minimum index is nolonger the one at i we carry out the classic swap technic on the variables 
        {
           int temp = array[i];
           array[i] = array[min_index];
           array[min_index]  = temp;
        }
  
    }
    
}
*/









