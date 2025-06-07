#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int *list = malloc(3*sizeof(int));

    if (list == NULL)
    {
       return 1; 
    }
    
   list[0] = 1;
   list[1] = 2;
   list[2] = 3;

   /*
//creating another array of size 4 since our initial one did not have enough space for the users input
    int *tmp = malloc(4*sizeof(int));

    if (tmp == NULL)
    {
        free(list);//if the array doesnt return anything its best practice to free the memory we initially asked for above
        return 1; 
    }
    
    for (int  i = 0; i < 3; i++)
    {
    tmp[i] = list[i];
    }
    
    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
    free(list);
    */


    //using realloc . It takes two parameters realloc(variable with already allocated memory , new size here )
    int *tmp = realloc(list,4*sizeof(int));

    if (tmp == NULL)
    {
        free(list);//if malloc does nt return anything its best practice to free the memory we initially asked for above
        return 1; 
    }
    
    for (int  i = 0; i < 3; i++)
    {
    tmp[i] = list[i];
    }
    tmp[3] = 4;

    
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
    free(list);


    return 0;
}