#include <stdio.h>
#include <unistd.h>

double add(double a, double b);
double subtraction(double a, double b);
double division(double a, double b);
double multiply(double a, double b);

int main(void)
{
    double firstnum, secondnum, result;
    char operator;

    printf("\n\n \t\t\t\t\t\t\tTHIS IS A CALCULATOR PROGRAM \n\n");

    while(1)
    {

        printf("\n\nFirst_number : \n");
        scanf("%lf", &firstnum);

        printf("Second_number : \n");
        scanf("%lf", &secondnum);

        getchar(); // to grab the space from the previous scan f functions
        printf("\nChoose an operator : (  +  -   /   *  ) : \n");
        scanf("%c", &operator);

        switch(operator)
            {
            case '+':
                printf(" %.1f  +  %.1f = %.1f \n",firstnum,secondnum, add(firstnum, secondnum));
                break;
            case '-':
                printf(" %.1f  -  %.1f = %.1f \n",firstnum,secondnum, subtraction(firstnum, secondnum));
                break;
            case '/':
                printf(" %.2f  /  %.2f = %.4f \n",firstnum,secondnum, division(firstnum, secondnum));
                break;
            case '*':
                printf(" %.1f  *  %.1f = %.1f \n",firstnum,secondnum, multiply(firstnum, secondnum));
                break;
            default:
                printf("invalid operator \n");
                break;
            }
            sleep(3);
        }
    return 0;
}

double add(double a, double b)
{
    return a + b;
}
double subtraction(double a, double b)
{
    return a - b;
}
double division(double a, double b)
{
    return a / b;
}
double multiply(double a, double b)
{
    return a * b;
}