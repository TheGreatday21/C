#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2d arrays are arrays in arrays. All the elements in the arrays are arrays 
int main ()
{
//creating a 2d array we use 2 box bracket for the width and height of the arrays 
    int nums [3][2] = {
        //the first box is for the number of arrays inside and the second is for the number of elements in the individual arrays 
        {1,2},
        {3,4},
        {5,6}
    };


  //  printf("%d \n",nums[0] [0]);


//Nested for loops is a situation where you have a for loop in a for loop 

    int i,j;
    
    for(i = 0; i < 3;i++)//we said i < 3 because thats the number of arrays in our array
    {
        for(j = 0; j < 2; j++)//here we specify j to less than 2 cause thats how many elements are in each array in the 2d array 
        {
            printf("%d,",nums[i][j]);
        }
        printf("\n");
    
    }
}




































