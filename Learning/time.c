//using the time.c library is fundamental for a programmer 
//the library uses pointers and structs when making variables 



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>//includes the sleep function . Valuable to have it with the time library 


int main(void)
{
//when making a variable  we use time_t(is a variable type intime lib) then we equate the variable to the time function with anull param to get time since 1970 in secs
time_t time_now = time(NULL);// we have created a variable to host time from Jan 1 1970 till now in seconds . This time is written in long integer format so we use the %ld specifier
printf("Time now : %ld \n",time_now);//Time now : 1747040298

//1 ....
// ctime returns time as a string .in format (day month date hour:min:sec year)
//How it works you pass a pointer to a time_t variable
char *string_now = ctime(&time_now);
printf("%s \n",string_now);

//2 ...
//Using local time struct to get specific types of time 
struct tm *local_t = localtime(&time_now);
printf("time_secs : %d \n",local_t->tm_sec);
printf("time_mins : %d \n",local_t->tm_min);
printf("time_hours : %d \n",local_t->tm_hour);
printf("time_month : %d \n",local_t->tm_mon);//months are counted starting from 0 
printf("time_month_Day : %d \n",local_t->tm_mday);


//3....
//Using the asctime function where the argument is the pointer with the local time 
//You pass a pointer to a localtime variable

char  *current_T = asctime(local_t);
printf("\n %s \n",current_T);






return 0;
}






















