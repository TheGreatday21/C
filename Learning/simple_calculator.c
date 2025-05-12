#include <stdio.h>
#include <stdlib.h>


int main ()
{
    double num1;
    double num2;

    printf("Enter first number :\n");
    scanf("%lf",&num1);
//when we are scanning for a double as input we have to use the  %lf format     
    getchar();//to grab the white space that scanf would have grabbed 
    printf("Enter second number :\n");
    scanf("%lf",&num2);

    printf("Answer is %f\n",num1 + num2);


    return 0;
}