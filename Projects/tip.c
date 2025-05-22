/*
Build a fully 	functional Tip Calculator application in C that calculates
the tip amount for a given bill. Hint: Use the “double” data type.
Use “scanf” to get the user’s bill, then calculate and use “printf” to 
display their tip amount and total bill (bill including tip).
*/

#include <stdio.h>
#include <stdlib.h>

void bill();
int main(void)
{

	while(1)
	{
		
		char input;
		printf("t:Transact \nq:quit         ");
		scanf("%c",&input);
		if(input == 't')
		{
			bill();
		}
		else if(input == 'q')
		{
			return 0;
		}
		else
		{
			printf("invalid operator");
			break;
		}
	}
}

void bill()
{
	double bill,tip;

	printf("Enter bill amount : ");
	scanf("%lf",&bill);
	getchar();

	printf("Enter tip amount  : ");
	scanf("%lf",&tip);
	getchar();

	printf("\nBill amount: %.3f \n",bill);
	printf("\nTip  amount: %.3f \n",tip);

	double total = bill + tip;
	printf("\nTotal  amount: %.3f \n",total);

	getchar();
}







