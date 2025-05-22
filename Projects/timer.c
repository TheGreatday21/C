#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main (void)
{
    int hour, minute, second;//creating the variable for time 
    hour = minute = second = 0 ; 

    while(1)//to keep it infinitely running until manually stopped 
    {
        fflush(stdout);//flushes the time 
        sleep(1);
        system("clear");
        printf("%02d : %02d : %02d ",hour, minute ,second);//printing two digits on the screen for each measure of time 

        second ++ ;//increasing seconds by one is the first parameter taken 

        if(second == 60)//condition for when a minute has elapsed 
        {
            minute ++;
            second = 0;//reset second variable to zero 
        }
        if(minute == 60)
        {
            hour ++;
            minute ++;
        }
        if(hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }

    }
    return 0;

}



















