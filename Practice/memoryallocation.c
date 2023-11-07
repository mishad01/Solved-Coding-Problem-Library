#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *a1;
    int *a2;

    a1 =(int*) malloc(5 * sizeof (int));
    a2 = (int*)calloc(5,sizeof(int));


    if(a1==NULL || a2 ==NULL)
    {
        printf("Memory not allocatde");
    }
    else{
        printf("memory allocation done\n");

        //do your work

        //free(a);
       // printf("memory freed successfully\n ");


        a1 = realloc(a1,50);
        printf("Memomry reallocation successfull");
}
    return 0;

}
