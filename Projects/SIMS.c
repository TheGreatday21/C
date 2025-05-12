//SIMS is a student Information Management program 
/*
Write a program to build a simple Software for Student Information Management System which can perform the following operations:

    Store the First name of the student.
    Store the Last name of the student.
    Store the unique Roll number for every student.
    Store the CGPA of every student.
    Store the courses registered by the student.
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>//allows us to use the exit code status like exit(0) like return 0 for success 
#include <string.h>

int how_many = 0;//variable to hold the number of students. First initialise it to 0

struct SIMS
{
    char fname[30];
    char lname[30];
    int  s_num;//student number 
    double cgpa;
    int cid;//course id
}students[55];

void courses(int cid);
void add_student();
void find_student_num();


int main(void)
{
    int input ;
    while(1)
    {
        printf("\t\t\t\t\n Code Academy Uganda \n");
        printf("1. Add a new student\n");
        printf("2. Find student by student number\n");
        printf("3. Find student by first name\n");
        printf("4. Update old student details \n");
        printf("5. Delete student \n");
        printf("6. Total number of students \n\t\t\t\t");    

        scanf("%d",&input);

        switch (input)
        {
        case 1:
            add_student();
            break;
        case 2:
            find_student_num();
            break;
        
        default:
            break;
        }
    }
  
    return 0;
}
//simple function for the courses 
void courses(int cid)
{
    switch (cid)
    {
    case 1:
        printf("BsDs");
        break;
    case 2:
        printf("BsCs");
        break;
    case 3:
        printf("BsIT");
        break;
    case 4:
        printf("DIT");
        break;
    default:
        break;
    } 
}
//creating a function that adds students 
void add_student()
{
    getchar();

    printf("\t\t\t\t\t\t\n..................Enter the student details here ................\n\n");

    printf("First name: ");
    fgets(students[how_many].fname, sizeof(students[how_many].fname), stdin);
    students[how_many].fname[strcspn(students[how_many].fname, "\n")] = '\0';

    printf("Last name: ");
    fgets(students[how_many].lname, sizeof(students[how_many].lname), stdin);
    students[how_many].lname[strcspn(students[how_many].lname, "\n")] = '\0';

   
    printf("Student number : ");
    scanf("%d", &students[how_many].s_num);
    getchar();
   

    printf("Current CGPA: ");
    scanf("%lf", &students[how_many].cgpa);
    getchar(); // Clear newline

    printf("Enter your  course ID (1: BsDs, 2: BsCs, 3: BsIT, 4: DIT):\n");
    scanf("%d", & students[how_many].cid);

    how_many += 1;

    printf("Student added successfully!\n");

}
//creating a function that finds existing students using the student number 
void find_student_num()
{
    getchar();

    int  user_num;
    int found = 0;

    printf("Enter your student number: ");
    scanf("%d",&user_num);

    for(int i = 0 ; i < how_many; i++)
    {
        if (students[i].s_num == user_num) 
        {
            printf("\n\t\t\tStudent details .......\n\n");

            printf("First name : %s\n", students[i].fname);
            printf("Last name : %s\n", students[i].lname);
            printf("Student number : %d\n", students[i].s_num);
            printf("Current CGPA: %.2f\n", students[i].cgpa);
            printf("Course: ");
            courses(students[i].cid);
            printf("\n");
            
            found = 1;
            exit(0);  // Exit the program after showing details
        }
    }

    if (!found)
    {
        printf("User student number invalid.\n");
        exit(1); //exit with error status
    }
}






