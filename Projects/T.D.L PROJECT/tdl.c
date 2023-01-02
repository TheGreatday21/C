/*Week 4: Building a To-Do List Console App
Fun Project 4: Develop a fully functional To-Do List Console App in C that allows you to add, view, mark as complete, and delete tasks.
Day 22: Learn How to Use Arrays and Strings
● An array is a way to have one variable name refer to a collection of variables of the same data type.
● A string in C is just a char array!
● Watch this video - How To Use Arrays in C
Day 23: Learn How to Use Structs
● Watch this video - Organize Your Data Using Structs
● Structs are a way for you to create your own special data types.
● For your To-Do List app, you can use a struct to store each task.
Day 24: Learn How to Use a CSV File
● Watch this video - How To Read a CSV File in C
● This video introduces you to the idea of reading and storing data.
● Think about how you can use a CSV file to read and store user data.
● The CSV file allows the user to have their to-do list even if they close the application and
run it at a later time.
Day 25: Implementing Task Management
● Write code for adding, viewing, and deleting tasks
● Create the struct data type for a task
○ Handle task descriptions as strings ● Manage task lists using arrays
○ You can create a struct for your tasks and use an array of that struct data type.
○ This array of your struct is the list of the tasks.
Day 26: Task Status and Prioritization
● Add functionality to mark tasks as complete
● Implement task priorities
Day 27: Error Handling and Validation
● Ensure user inputs for tasks are valid (e.g., non-empty)
● Provide feedback for incorrect inputs
Day 28-30: Practice and Review
● Finish up and test your app*/


//In this application we will be creating a to do list of sort where we use concepts like structs to get the job done and functions to handle the various operations 


#include <stdio.h>
#include <string.h>
#include <unistd.h>


int registration();
void t_users();

const int totalUsers = 10;
const int totalItems = 10;
const int totalLists =10;

typedef struct 
{
	int userId;
	char fName[30];
	char lName[30];
}users;
users user[totalUsers]; //creating a struct to store the ten users
int customer = 0;

typedef struct 
{
	char listHeader[64];
	char listItems[][120];//the second bracket specifies how large each array is going to be.. Here we said each item can have 120 characters
}lists;
lists list[totalLists];
int lH = 0;//list header

int main(void)
{
	//to link a userid to a list or a number of lists
	int inputId; 
	printf("Enter your userID: ");
	scanf("%d",&inputId);
	
	
	
	
	
}


int registration()
{
	char userInput[5];
	printf("Register(yes or no):");
	fgets(userInput,sizeof(userInput),stdin);
	userInput[strcspn(userInput,"\n")] = '\0';

	if (strcmp("YES",userInput) == 0 || strcmp("yes",userInput) == 0)
	{
		user[customer].userId = customer; //the value of i in the loop becomes the value of the user id for user0
		
		printf("First name: ");
		fgets(user[customer].fName,sizeof(user[customer].fName),stdin);
		user[customer].fName[strcspn(user[customer].fName,"\n")] = '\0';//to enable the pc know where the string stops

		printf("Last  name: ");
		fgets(user[customer].lName,sizeof(user[customer].lName),stdin);
		user[customer].fName[strcspn(user[customer].fName,"\n")] = '\0';

		customer++;
	}
	else
	{
		printf("We hate to see you go..\n");
		return 1;
	}
}
void t_users()
{
	for (int  j = 0; j < totalUsers; j++)
	{
		printf("user id is   : %d\n",user[j].userId);
		printf("user fname is: %s\n",user[j].fName);
		printf("user lname is: %s\n",user[j].lName);
	}
}
void add_list()
{
	char userInput[5];
	printf("Make a list(YES or NO): ");
	fgets(userInput,sizeof(userInput),stdin);
	userInput[strcspn(userInput,"\n")] = '\0';

	if (strcmp("YES",userInput) == 0)
	{
		do
		{
			printf("List Header: ");
			fgets(list[lH].listHeader,sizeof(list[lH].listHeader),stdin);
			list[lH].listHeader[strcspn(list[lH].listHeader,"\n")] = '\0';
			//getchar();

			int i = 0;
			while(i < totalItems)
			{
				printf("%d : ",i+1);
				fgets(list[lH].listItems[i],sizeof(list[lH].listItems)[i],stdin);
				list[lH].listItems[i][strcspn(list[lH].listItems[i],"\n")] = '\0';
				i++;
			}
			lH++;

		} while (lH < totalLists);
		printf("Out of lists.\n");
	}
	else if(strcmp("NO",userInput) == 0)
	{
		return 1;
	}
	else
	{
		printf("invalid input: \n");
		exit(0);
	}
	
}


















