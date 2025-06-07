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
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int add_list();
int login_edit();
int login_view();
int registration();
int view_lists(int usersIdHere);
void load_users();
void load_lists();
void save_users();
void save_lists();
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
	int listId;
	char listHeader[64];
	char listItems[][120];//the second bracket specifies how large each array is going to be.. Here we said each item can have 120 characters
}lists;
lists list[totalLists];
int lH = 0;//list header

int main(void)
{
	while (true)
	{
		load_users();
		load_lists();
		//First thing when entering the program should be to load the users and lists in our files already

		int start;

		printf("\t\t\t....................APPLE NOTES PRIME........................\n\n");
		printf("1. Create a new list .\n");
		printf("2. Edit an  old list .\n");
		printf("3. View your lists .\n");
		switch (start)
		{
		case 1:
			add_list();
			break;
		case 2:
			login_edit();
			break;
		case 3:
			login_view();
			break;	
		default:
			break;
		}
	}
	
}
int inputId;//this variable is used when a user is placing in the user id

int login_edit()
{

	char loginInfo[5];
	printf("Are you already a user:(yes or no):");
	fgets(loginInfo,sizeof(loginInfo),stdin);
	loginInfo[strcspn(loginInfo,"\n")] = '\0';

	if (strcmp("YES",loginInfo) == 0 || strcmp("yes",loginInfo) == 0)
	{
		printf("Enter your userID: ");
		scanf("%d",&inputId);


		int found = 0;
		for (int i = 0; i < customer; i++)
		{
			if (inputId == user[i].userId)
			{
				found = 1;
				edit_list();

			}
		}
		if (!found)
		{
			printf("User data could not be found ... Thanks ~ Management \n");
			return 0;
		}
		
	}
	else if(strcmp("NO",loginInfo) == 0 || strcmp("no",loginInfo) == 0)
	{
		registration();
	}
	else
	{
		printf("Invalid input");
	}

}
int login_view()
{

	char loginInfo[5];
	printf("Are you already a user:(yes or no):");
	fgets(loginInfo,sizeof(loginInfo),stdin);
	loginInfo[strcspn(loginInfo,"\n")] = '\0';

	if (strcmp("YES",loginInfo) == 0 || strcmp("yes",loginInfo) == 0)
	{
		 
		printf("Enter your userID: ");
		scanf("%d",&inputId);


		int found = 0;
		for (int i = 0; i < customer; i++)
		{
			if (inputId == user[i].userId)
			{
				found = 1;
				view_lists(inputId);

			}
		}
		if (!found)
		{
			printf("User data could not be found ... Thanks ~ Management \n");
			return 0;
		}
		

		
	}
	else if(strcmp("NO",loginInfo) == 0 || strcmp("no",loginInfo) == 0)
	{
		registration();
	}
	else
	{
		printf("Invalid input");
	}

}
int add_list()
{
	getchar();

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
		save_lists();



	} while (lH < 1);

	printf("Out of lists.\n");
	return 1;
	
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

		printf("Your user Id : %d \n",customer);

		customer++;
		save_users();

		
	}
	else if(strcmp("NO",userInput) == 0 || strcmp("no",userInput) == 0)
	{
		printf("We hate to see you go..\n");
		return 1;
	}
	else
	{
		printf("Invalid input");
	}
	
	return 2;
}
int  view_lists(int usersIdHere)
{
	
	
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
void save_users()
{
	FILE *fUser = fopen ("user.dat","wb");//since ive created a binary file ill save the data in binary with the wb - write binary function 
	if (fUser == NULL)
	{
		printf("Data could not be saved \n");
		return;//you can just return in a void function even if there is no integer returned but this is not the best practice cause it makes error checking hard
	}
	
	fwrite(&customer,sizeof(int),1,fUser);
	//fwrite (address_of_variable_holding_the_number_of_users_in _the_program,sizeOfVariable,1,pointer_to_file);
	fwrite(user,sizeof(users),customer,fUser);
	//fwrite(container from struct, sizeofActualStruct,Variable_holding_the_number_of_users_in _the_program,pointer_to_file)

	fclose(fUser);

}
void load_users()
{
	FILE *fUserLoad = fopen ("user.dat","rb");//since ive created a binary file ill save the data in binary with the wb - write binary function 
	if (fUserLoad == NULL)
	{
		printf("Data could not be loaded\n");
		return;//you can just return in a void function even if there is no integer returned but this is not the best practice cause it makes error checking hard
	}
	
	fread(&customer,sizeof(int),1,fUserLoad);
	//fwrite (address_of_variable_holding_the_number_of_users_in _the_program,sizeOfVariable,1,pointer_to_file);
	fread(user,sizeof(users),customer,fUserLoad);
	//fwrite(container from struct, sizeofActualStruct,Variable_holding_the_number_of_users_in _the_program,pointer_to_file)

	fclose(fUserLoad);

}
void save_lists()
{
	FILE *fList = fopen ("list.dat","wb");//since ive created a binary file ill save the data in binary with the wb - write binary function 
	if (fList == NULL)
	{
		printf("List could not be saved \n");
		return;//you can just return in a void function even if there is no integer returned but this is not the best practice cause it makes error checking hard
	}
	
	fwrite(&lH,sizeof(int),1,fList);
	//fwrite (address_of_variable_holding_the_number_of_users_in _the_program,sizeOfVariable,1,pointer_to_file);
	fwrite(list,sizeof(lists),lH,fList);
	//fwrite(container from struct, sizeofActualStruct,Variable_holding_the_number_of_users_in _the_program,pointer_to_file)

	fclose(fList);

}
void load_lists()
{
	FILE *fListLoad = fopen ("list.dat","rb");//since ive created a binary file ill save the data in binary with the wb - write binary function 
	if (fListLoad == NULL)
	{
		printf("Lists could not be loaded\n");
		return;//you can just return in a void function even if there is no integer returned but this is not the best practice cause it makes error checking hard
	}
	
	fread(&lH,sizeof(int),1,fListLoad);
	//fwrite (address_of_variable_holding_the_number_of_users_in _the_program,sizeOfVariable,1,pointer_to_file);
	fread(list,sizeof(lists),lH,fListLoad);
	//fwrite(container from struct, sizeofActualStruct,Variable_holding_the_number_of_users_in _the_program,pointer_to_file)

	fclose(fListLoad);

}
void edit_list()
{

}












