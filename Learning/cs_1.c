#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//# is  a symbol that is used for preprocessing 
int main(void){
	char name[25];

	printf("What is your name lad ? ");
	//scanf("%s", name); //here if a white space is added it is skipped 
	fgets(name,25,stdin);// here all strings are gotten including white space 

	printf("nice to meet you, %s\n", name );

}



//once code is compiled , it takes a huge amount of effort to decompile it 

