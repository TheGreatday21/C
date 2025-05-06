
//the difference between an array and an variable is that an array is a container for many elements while a variable is typically a container for only one element 

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int operations[] = {1,2,3,4};// for arrays we have to place the numbers in {}
    char symbols[] = {'+','-','/','*'};
    int user;
    double first_num;
    double last_num;
    double answer;

    while (1)
    {
        printf("\n");
        printf("Enter the operation you require:\n");
        printf("1.  +\n2.  - \n3.  /\n4.  *\n");
        scanf("%d",&user);
    
        printf("Enter your first number : \n");
        scanf("%lf",&first_num);
        
        printf("Enter your second number : \n");
        scanf("%lf",&last_num);
        
        if (user == operations[0])
        {
            answer = first_num +  last_num ;
            printf("\nWhen we \"%c\"  %0.2f and %0.2f we get %0.4f \n",symbols[0],first_num,last_num,answer);   
        }
        else if (user == operations[1])
        {
            answer = first_num -  last_num ;
            printf("\nWhen we \"%c\" %.2f and %.2f we get %.4f \n",symbols[1],first_num,last_num,answer);   
        }
        else if (user == operations[2])
        {
            answer = first_num /  last_num ;
            printf("\nWhen we \"%c\" %.2f and %.2f we get %.4f \n",symbols[2],first_num,last_num,answer);   
        }
        else if (user == operations[3])
        {
            answer = first_num * last_num ;
            printf("\nWhen we \"%c\"  %.2f and %.2f we get %.4f \n",symbols[3],first_num,last_num,answer);   
        }
        else
        {
            printf("\n ******Invalid operation*******\n\n");
        }
    }
    return 0;
}























