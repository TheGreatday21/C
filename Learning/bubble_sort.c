/*
Bubble sort has a run time of O(n)

Return if no swaps
For i from 0 to n-1
if numbers[i]>numbers[i+1]
swap them 
*/

#include <stdio.h>
#include<stdlib.h>
void swap(int* a, int* b);




/* ---------------------------------------BUBBLE SORT WITH A FUNCTION USING POINTERS-------------------------------------
int main(void)
{
    
    int numbers[] = {3,0,1,8,4,2,7,6,9,5};
    int n = sizeof(numbers)/ sizeof(numbers[0]);
    
    printf("\nArray before sorting: ");
    for (int l = 0; l < n; l++)
    {
        printf("%d,",numbers[l]);
    }
    
    printf("\n");

    for (int i = 0; i < n; i++ ) 
    {

        for (int j = 0; j < n-1; j++)//we iterate till the second last value cause we cant bubble the last value with some rand in memory 
        {
            if (numbers[j] > numbers[j+1])
            {
                swap(&numbers[j],&numbers[j+1]);
                
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

 void swap(int* a, int* b)
 {
    int tmp = *a;
    *a = *b;
    *b = tmp;
 }
*/
//---------------------------------------------BUBBLE SORT WITH A FUNCTION PASSING AN ARRAY AND THE LENGTH OF THE ARRAY AS ARGS----------------------//

void bubble(int array[], int length);
int main(void)
{
    int numbers[] = {3,0,1,8,4,2,7,6,9,5};
    int n = sizeof(numbers)/ sizeof(numbers[0]);

    bubble(numbers,n);
    printf("Sorted array: ");
    for (int k  = 0; k < n; k++)
    {
        printf("%d",numbers[k]);
    }
    printf("\n");


}

void bubble(int array[], int length)
{
    for(int i =0 ; i < length; i++)
    {
        for(int j = 0; j < length - 1; j++)//to reduce the number of passes we are doing we also deduct the number at i because on te first swap the max number will always be in position
        {//for(int j = 0; j < length - 1 - i; j++)
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
    }

}
































