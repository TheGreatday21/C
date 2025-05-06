#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int N = 3;

float average (int array[]);

int main (void)
{
    int scores[N] ;

    for (int i =0; i < N; i++)
    {
        printf("Whats your number : ");
        scanf("%d",&scores[i]);
    }

  printf("average %f\n",average(scores));

}


float average (int array[])
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum = sum + array[i];

    } 
    return sum / (float)N;
}



























