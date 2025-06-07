#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct node//we mention the name of the struct up here before entering the params so that c can see it before it is stated again at the end of the code 
{
    int number;
    struct node *next; //the pointer next points to another node 
}node;
//node is just a container for data in memory 

int main(void)
{
    //linked lists are used when the data in the program is not contiguous 
    //we can use pointers to point to the various data and ideally  link them together to each other 
    //For example linking integers we store then whenever the are stored in memory and we use pointer to where they start and end with the NULL identifier
    //A linked list gives you incredibly more flexibility 

    node *list = NULL; //a single pointer pointing to the beginning of the list 

    for (int  i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
          return 1;
        }

        int Num;
        printf("Number: ");
        scanf("%d",&Num);
        getchar();
        (*n).number = Num;//go to the address first (derefencing)then go inside the chunk of memory and add whatever the human types in  
        //(*n).next = NULL;
        //n->number = Num;
        //n->next = NULL;

        n->next = list;//next should point to whatever list is pointing to 
        list = n;
        
    }

    node *ptr = list;
    while (ptr != NULL)
    {
       printf("%i\n",ptr->number);
       ptr = ptr->next;
    }

    return 0;
}