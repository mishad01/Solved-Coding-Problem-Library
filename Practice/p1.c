#include<stdio.h>
int main()
{
    int x[]= {1,2,3,3,4,4,5,5,6,7};
    int y[50];
    int z[50];
    int i,j;
    int b;


    printf("X : ");
    for (i=0; i<10; i++)
    {
        printf("%d ",x[i]);
    }
    printf("\ny : ");
    for (i=0; i<10; i++)
    {
        y[i]=x[i];
    }
    for (i=0; i<10; i++)
    {
       printf("%d ",y[i]);
    }
    printf("\n\nSelective Z element : ");
    for(i=0; i<10; i++)
   {
    for(j=i+1;j<10;j++)
    {
    if(x[i]==y[j])
    {
    z[i]=x[i];
    printf("%d ",z[i]);
    }
   }
   }
   /* printf("\nZ : ");
     for (i=0; i<10; i++)
    {

    }
*/


}


