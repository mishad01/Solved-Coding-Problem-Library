#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main ()
{
    int *ptr,n,i;
    printf("Input the number of integer to input : ");
    scanf("%d",&n);

    //ptr =(int *) malloc(n* sizeof(int));
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocatde");
        exit(1);
    }

    for (i=0; i<n; i++)
    {
        printf("Enter Integer");
        scanf("%d",ptr + i);
    }
    for (i = 0; i<n; i++)
    {
        printf("%d ",*(ptr + i));

    }
    ptr = (int*)realloc(ptr,5*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not available");
        exit(1);
    }



}
