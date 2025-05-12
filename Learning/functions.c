//today we will be learning how to use functions in c
//The  main function  is also  a function in c


#include <stdio.h>
#include <stdlib.h>


/*
//we have to inform c of the functions at the top of our program 
void say_hello(void);
void say_hello_prime(char name[]);//This is referred to as prototyping 
double cube(double num);

int main (void)
{
    say_hello();
    say_hello_prime("Elijah");
    printf("your answer is %.6f\n", cube(3));
    return 0;

}

//1. Simple print function 
void say_hello(void)//has no return value 
{
    printf("Hello how are you ...\n");
}

//2. Parameter function 
void say_hello_prime(char name[])//There can be more than one parameter placed here 
//void makes the function return nothing(0)
{
    printf("Hello  %s how are you ...\n",name);
}

//3. Return function( a cubing function ) 
double cube(double num)
{
    double result = num * num *num ;
    return result;//The return key word breaks us out of the function 
}
*/

/**/
void meow (int n);
int add ();
int main (void)
{
    meow(4);

    int x ;
    int y;
    printf("Write your first number : \n");
    scanf("%d",&x);
    printf("Write your second number : \n");
    scanf("%d",&y);
    printf("Your total is : %d  \n", add(x,y));
}

//non return value function 
void meow (int n)
{
    for (int i  = 0 ; i < n; i++)
    {
        printf("meow\n");
    }
}
//return value function 
int add (int a, int b )
{
    return a + b;
}






















