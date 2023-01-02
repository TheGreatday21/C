#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "phonebook.csv"

//using the file functions of stdlib
/*
fopen - opening a file 
fclose - closing a file
fscanf
fprintf - printing to a file 
fread
fwrite
fseek
*/
//You have to always check if pointers are valid always because if they are null bad things can happen 
int main(void)
{
    /*
//Creating a file (csv - comma separated values)
    FILE *file = fopen(FILENAME, "a"); //"w" write mode "a" append to file 

    if(file == NULL)
    {
        return 1;
    }
    //getting input from the user and adding it to the file 
    char name[10];
    char number[17];

    printf("Name: ");
    fgets(name, 10,stdin);
    printf("number: ");
    fgets(number, 17,stdin);

    fprintf(file, "%s,%s\n",name ,number);
    fclose(file);

*/


FILE *fh_output;

  
//using WRITE (w) mode.  Every time the file is opened a new all the previous data is wiped for the new data being entered

fh_output = fopen("io.txt","w");//open the file io.txt and write to it(If it does not exist it will be created )

//The first function is the fputs function that simply puts "string_data" in to the file you created -specifically only strings 
fputs("Abc",fh_output);
fputs("123\n",fh_output);
fputs("A  string\n",fh_output);

//The fprintf function works the same as printf
int data = 5;
fprintf(fh_output,"data: %d\n",data);//fprintf(filename, "string , :formatspecifier",variable_here)
//this is how it will appear in your file . (data: 5)

//using the APPEND mode (a) This is where the data in the file is not erased every time the program restarts but is rather new data is added to the already existing data 
fh_output = fopen("io.txt","a");//open the file io.txt and append to it(If file does not exist it will be created )


//The first function is the fputs function that simply puts "string_data" in to the file you created -specifically only strings 
fputs("Abc",fh_output);
fputs("123\n",fh_output);
fputs("A  string\n",fh_output);

//The fprintf function works the same as printf
int data = 5;
fprintf(fh_output,"data: %d\n",data);//fprintf(filename, "string , :formatspecifier",variable_here)
//this is how it will appear in your file . (data: 5)

//now if we ran the file . The staff we are adding will be more than before

//these functions can be used in loops as well 
for (int  i = 0; i < 10; i++)
{
    fprintf(fh_output,"Number: %d\n",i);
}

int input;
while (1)
{
    printf("Enter # (-1 quits): ");
    scanf("%d",&input);

    if (input == -1){break;}
    else
    {
        fprintf(fh_output,"%d\n",input);
    }
    
}

//.........NOTE...........//to see our output on the console after we have used clang on our file we can use the command "cat file_name_here.file_ext"....
fclose(fh_output);//it is mandatory to close our files after using them 



FILE *fh_input ;

//using the read function to read the contents of the file we created already 
fh_input = fopen("io.txt","r"); 

int finput;
int lines = 0;
int numbers[100];

fscanf(fh_input,"%d",&finput);//it will read the file and store any integers it finds in the file into finput
printf("Number: %d\n",finput);

//we can also use fscanf to read to the end of the file using a loop 

while (fscanf(fh_input,"%d",&finput) != EOF)//it will read the file and store whatever integer it finds into finput
{
    numbers[lines] = finput;
    printf("fileLine %d: %d\n",lines+1,finput);
    lines++; //this is using an array as a buffer
}

fclose(fh_input);



FILE *fInput;

fInput = fopen("in.txt","r"); //fInput is to read the file in.txt

char buffer[256];
//we are using the fgets function to read the information in the file 

fgets(buffer,256,fInput); //just like how you use it in getting strings from users but this time the last is not stdin but the file_name
//fgets reads until the end of the file or until  it reaches a new line
fprintf("Buffer: %s\n",&buffer);

fclose(fInput);

}







