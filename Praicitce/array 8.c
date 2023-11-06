#include<stdio.h>
int main ()
{
    int x[] = {1,2,2,3,3,4,5,6,6,7,8,9,9,10};
    int f[100];
    int i,j;
    int count = 0;
    int size;
    int isfound =0;

    printf("Input the size of the array");
    scanf ("%d",&size);

    for (i=0;i<size;i++)
    {
        printf (" Element  %d: %10d\n",i,x[i]);
        f[i] =-1;
    }
    for (i=0;i<size;i++)
    {
        count = 1;
        for (j=i+1;j<size;j++)
        {

             if (x[i] == x[j])
             {
                count++;
                f[j]=0;
             }

        }
        if (f[i]!= 0)
        {
            f[i]=count;
        }

    }
    for (i=0;i<size;i++)
    {
        if (f[i] != 0)
        {
            printf (" %d found %d in Array\n",x[i],f[i]);
        }
    }

}
