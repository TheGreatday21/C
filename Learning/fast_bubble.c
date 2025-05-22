
#include <stdio.h>
#include <stdbool.h>

void fastBubble(int array[], int length);
int main(void)
{
	int numbers[] = {1,6,9,8,2,5,3,4,7,0};
	int length = sizeof(numbers)/sizeof(numbers[0]);

	fastBubble(numbers, length);

	for(int i = 0 ; i < length; i++)
	{
		printf("%d",numbers[i]);
	}
	printf("\n");


	return 0;
}



void fastBubble(int array[], int length)
{
	bool swapped = false; //creating a boolean value that will enable us to know when a swap is done 
	int i = 0;

	do
	{
		swapped = false;//whenever the do while loop starts the boolean is always set to false and if a swap is made the value changes to true

		for(int j = 0; j < length - 1 - i; j++)
		{
			if(array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

				swapped = true;
			}

		} 
		i++;// i increases after every iteration through the loop signifying that thats one high number less to worry about hence the subtractions in the for loop 

	}while(swapped); //this loop will continue as long as swapped is true 
}












