#include<stdio.h>
int main ()
{


   int x[10]={1,2,2,4,5,5,7,7,8,9};
   int size =10;
   int count = 0;
   int i,j;

    printf ("%s %10s\n", "Eelements","Value");
    for (i=0;i<size;i++)
    {
        printf (" %d %14d\n",i,x[i]);

    }
    for (i=0;i<size;i++)
    {
        count  = 0;
        for (j=0;j<size;j++)
        {
            if (i != j)
            {
            if (x[i] == x[j])
            {
                count ++;
            }
            }
        }
        if (count==0)
        {
            printf ("%d", x[i]);
        }
    }

printf("\n");

}
