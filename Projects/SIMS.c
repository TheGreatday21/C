//SIMS is a student Information Management program 
/*
Write a program to build a simple Software for Student Information Management System which can perform the following operations:

    Store the First name of the student.
    Store the Last name of the student.
    Store the unique student number for every student.
    Store the CGPA of every student.
    Store the course registered by the student.
*/

#include <stdio.h>
#include <stdlib.h>//allows us to use the exit code status like exit(0) like return 0 for success 
#include <string.h>
#include <unistd.h>

int how_many = 0;//variable to hold the number of students. First initialise it to 0

struct SIMS
{
    char fname[30];
    char lname[30];
    int  s_num;//student number 
    double cgpa;
    int cid;//course id
}students[55];//this struct can store 55 students 

void courses(int cid);//prototyping my functions for main to see 
void add_student();
void find_student_num();
void find_student_fname();
void update_student();
void delete_student();
void total_students();

int main(void)//placed main in an infinite loop so that the global variable how_many does not reset 
{
    int input ;
    while(1)
    {
        printf("\t\t\t\t\n\n Code Academy Uganda \t\t\n\n");
        printf("1. Add a new student\n");
        printf("2. Find student by student number\n");
        printf("3. Find student by first name\n");
        printf("4. Update old student details \n");
        printf("5. Delete student \n");
        printf("6. Total number of students \n");   
        printf("7. Close application \n\t\t\t\t");  

        scanf("%d",&input);

        switch (input)
        {
        case 1:
            add_student();
            break;
        case 2:
            find_student_num();
            break;
        case 3:
            find_student_fname();
            break;
        case 4:
            update_student();
            break;
        case 5:
            delete_student();
            break;
        case 6:
            total_students();
            break;
        case 7:
            exit(0);
        
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

    printf("\t\t\t\t\t\t\n..................Enter the student details here ................\n");

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

    printf("\n\n\t\t\tStudent added successfully!\n\n\n");

}
//creating a function that finds existing students using the student number 
void find_student_num()
{
    getchar();

    int  user_num;
    int found = 0;
    int main_menu;

    printf("Enter your student number: ");
    scanf("%d",&user_num);

    for(int i = 0 ; i < how_many; i++)
    {
        if (students[i].s_num == user_num) 
        {
            printf("\n\t\t\t...........Student details .......\n\n");

            printf("First name     : %s\n", students[i].fname);
            printf("Last name      : %s\n", students[i].lname);
            printf("Student number : %d\n", students[i].s_num);
            printf("Current CGPA   : %.2f\n", students[i].cgpa);
            printf("Course         : ");
            courses(students[i].cid);
            printf("\n");
            
            found = 1;
            
        }
    }
    if (!found)//if not true (since found = 0 )
    {
        printf("User student number invalid.\n");
    }

    printf("\n\nPress\n 1 : main menu\n 0 : exit");
    scanf("%d",&main_menu);
    if (main_menu == 1)
    {
        main();
    }    
    else
    {
        exit(0);
    }
}
//creating a function to find a student using their first name 
void find_student_fname()
{
    getchar();

    char user_input[30];
    int found,main_menu;

    printf("Enter the firstname here: ");
    fgets(user_input,sizeof(students[how_many].fname),stdin);
    user_input[strcspn(user_input, "\n")] = '\0';


    for(int i = 0; i < how_many;i++)//this loop iterates through the number of students in the variable how many
    {
        if (strcmp(user_input, students[i].fname) == 0)
        {
            printf("\t\t\t\t\t..........Student details .........\n");
            printf("Student first name : %s \n",students[i].fname);
            printf("Student last name  : %s \n",students[i].lname);
            printf("Student number     : %d \n",students[i].s_num);
            printf("Student  cgpa      : %f \n",students[i].cgpa);
            printf("Course             : ");
            courses(students[i].cid);
            printf("\n");

            found = 1;
            
        }
        
    }
    if(!found)
    {
        printf("Student not available \n");
    }

    printf("\n\nPress\n 1 : main menu\n 0 : exit");
    scanf("%d",&main_menu);
    if (main_menu == 1)
    {
        main();
    }    
    else
    {
        exit(0);
    }

}
//create a function to update an already existing student 
void update_student()
{
    getchar(); //removing the new line 

    int user_input,update;//creating integer variables to hold user input and update number for que 
    int main_menu;
    printf("Enter student number : ");
    scanf("%d",&user_input);

    for (int i = 0; i < how_many; i++)
    {
        if(students[i].s_num == user_input)
        {
            getchar();
            printf("\nSelect number to update details \n");
            printf(" 1. First name\n 2. Last name\n 3. CGPA\n 4. course id \n\t\t\t\t");
            scanf("%d",&update);

            switch (update)
            {
            case 1:
                printf("New first name: ");
                scanf("%s",students[i].fname);
                break;
            case 2:
                printf("New last name: ");
                scanf("%s",students[i].lname);
                break;
            case 3:
                printf("New  CGPA: ");
                scanf("%lf",&students[i].cgpa);
                break;
            case 4:
                printf("New course id (1: BsDs, 2: BsCs, 3: BsIT, 4: DIT) : ");
                scanf("%d",&students[i].cid);
                break;
            
            default:
                break;
            }

            printf("\n\t\t\t\t.....................Details updated successfully.................... \n");
            
        }
    }

    printf("\n\nPress\n 1 : main menu\n 0 : exit");
    scanf("%d",&main_menu);
    if (main_menu == 1)
    {
        main();
    }    
    else
    {
        exit(0);
    }

}
//create a function to delete a student from the struct
void delete_student()
{
    getchar(); 

    int user_input,n,main_menu; 
    printf("This will delete a student from your db \n");
    printf("Enter student number : ");
    scanf("%d",&user_input);


    //use a for loop to iterate through the array to find the student and then assign the how many variable -1 at that index 
    for(int i = 0; i < how_many;i++)
    {
        if(students[i].s_num == user_input)
        {
            //we use a loop to delete the student by replacing them .Each student is raised 1 up to replace the number and tthe global variable is update with one less 
            for(int j = i; j <= i; j++)
            {
                students[j] = students[j + 1];
            }
            how_many --;
        }
    }

    printf("Student successfully deleted \n");

    printf("\n\nPress\n 1 : main menu\n 0 : exit");
    scanf("%d",&main_menu);
    if (main_menu == 1)
    {
        main();
    }    
    else
    {
        exit(0);
    }


}
//create a function to get the total number of students and just show 3 of their details 
void total_students()
{
    getchar();

    int main_menu;

    for(int i = 0; i < how_many; i++)
    {
        printf("\n\t\t\t\t....................Current enrolled students ...............\n\n");
        printf("First name     : %s\n", students[i].fname);
        printf("Last name      : %s\n", students[i].lname);
        printf("Student number : %d\n", students[i].s_num);

        sleep(2);

        printf("\n");
    }

    printf("\n\nPress\n 1 : main menu\n 0 : exit");
    scanf("%d",&main_menu);
    if (main_menu == 1)
    {
        main();
    }    
    else
    {
        exit(0);
    }

}






         



