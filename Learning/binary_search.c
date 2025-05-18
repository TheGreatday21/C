#include <stdio.h>

int main (void)
{
    //binary search works on sorted arrays only 
    int numbers[] = {10,20,25,30,50,100};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    int low_index = 0;
    int high_index = n - 1;
    int user_input;
    int found = 0;

    printf("What number are you looking for: ");
    scanf("%d",&user_input);
    getchar();

    while (low_index <= high_index)
    {
        int mid_index = low_index + (high_index - low_index)/2;

        if(user_input == numbers[mid_index])
        {
            found = 1;
            printf("Number found in array at index %d \n", mid_index);
            break;
        }
        else if(user_input > numbers[mid_index])
        {
            low_index = mid_index + 1; //to start searching the other half 
        }
        else if(user_input  < numbers[mid_index])
        {
            high_index = mid_index -1 ;
        }
        
       
    }
    if (!found)
    {
        printf("Number not in the array: \n");
    }
    


return 0;

}




