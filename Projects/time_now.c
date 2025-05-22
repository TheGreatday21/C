#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main (void)
{
    while (1)
    {
        time_t now = time(NULL); //CREATING A TIME T VARIABLE TO HOLD TIME IN SECONDS SINCE 1970
        struct tm *current_time = localtime(&now); //using the struct with already input functions to help us specify what in time we want to print 
        //creating a pointer current_time to point to the time t variable using the local time function .by passing the address of the time t variable as an argument 
        printf("%02d : %02d : %02d \n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);

        sleep(1);
        system("clear");
    }
   

    return 0;
}
















