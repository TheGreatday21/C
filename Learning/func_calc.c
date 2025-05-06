#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double add(double a,double b);
double divide(double a,double b);
double multiply(double a,double b);
double subtract(double a,double b);

int main(void)
{
   
        double num1,num2,result;
        char name[25];

        printf("Hello, What might your lovely name be: \n");
        fgets(name,25,stdin);
        name [strcspn(name,"\n")] = 0;
      
        printf("\nWelcome to calculiner %s \n\n", name);

    while(1)
    {
        printf("Enter your first number : \n");
        scanf("%lf",&num1);
        printf("Enter your second number : \n");
        scanf("%lf",&num2);

        char operator ; 
        printf("Chose an operator (+ , - , / , * ) : ");
        fgetc(stdin);
        //getchar();//grab the extra line left by scanf above 
        scanf("%c",&operator);

        switch (operator)//Is a type of if statement that checks what is in a variable with cases 
        {
            case '+':
                result = add(num1, num2);
                printf("\n\nResult: %.2f\n\n\n", result);
                break;
            case '*':
                result = multiply(num1, num2);
                printf("\n\nResult: %.2f\n\n\n", result);
                break;
            case '/':
                if (num2 != 0)
                {
                    result = divide(num1, num2);
                    printf("\n\nResult: %.2f\n\n\n", result);
                }
                else
                {
                    printf("Error: Division by zero!\n\n\n");
                }
                break;
            case '-':
                result = subtract(num1, num2);
                printf("\n\nResult: %.2f\n\n\n", result);
                break;
            default:
                printf("\n\nInvalid operator\n\n\n");
        }
    }
}

double add(double a,double b)
{
    return a + b;
}
double divide(double a,double b)
{
    return a /b ;
}
double subtract(double a,double b)
{
    return a - b ;   
}
double multiply(double a,double b)
{
    return a * b ;
}