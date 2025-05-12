/*
Linear search is an algorithm we use to get an item in an array 
Linear search can work on unsorted data 
the lower bound(O) of linear search is O(n^2) and the upper bound(best case scenario) is still Ω(n^2) and the average case scenario is still (n^2)because despite the number being the first in the array according to the sudo code below it still has to iterate through the array to confirm if it is indeed the one 

For characters from left to right 
    if num from user == num in array
        return true 
else
    return false
//the false statement is placed outside the for loop so that the loop doesnt end when the character is found 

*/

#include <stdio.h>
#include <string.h>



int main (void)
{

    int numbers[] = {100,200,40,50,10,20};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    int user_num;
    printf("What number you looking for : ");
    scanf("%d", &user_num);

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == user_num)
        {
            printf("Number foundat index : %d \n",i);
            return 0;
        }
       
    }

    printf("Number not found in the array .");
    return 1;


}



















