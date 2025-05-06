#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structs are data structures which allow us to store many data types together 
//THey technically act like data bases 
struct Students //they always start with a capital letter 
{//Here we create variables to describe the different values for the student in our struct
    char name[50];
    int age ;
    char gmail[50];
    double gpa;
};

int main(void)
{

    struct Students student1;//creating a container thats going to contain all this data of different data types 
    //they are similar to arrays but they can store different dts together 
    student1.age = 24;
    student1.gpa = 4.6;
    //for strings we dont just assign values but we use the string copy function 
    strcpy(student1.name, "ELijah");
    strcpy(student1.gmail, "kaizzielijah@gmail.com");


    struct Students student2;//creating a containter thats going to contain all this data of different data types 
    //they are similar to arrays but they can store different dts together 
    student2.age = 24;
    student2.gpa = 4.2;
    //for strings we dont just assign values but we use the string copy function 
    strcpy(student2.name, "James");
    strcpy(student2.gmail, "james@gmail.com");

    //we can see what we have stored in our struct using printf function 
    printf("%.2f\n",student1.gpa);
    printf("%s\n",student2.name);

    return 0;

}




















