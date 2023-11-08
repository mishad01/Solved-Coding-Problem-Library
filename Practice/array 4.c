#include<stdio.h>
int main ()
{

    int x[10];
    //int y[10];
    int i;
    int n;
    int count = 0;
    int m;
    printf ("Input the number of element you want store ");
    scanf ("%d",&n);


    for (i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }

    /*for(i=0;i<n;i++)
    {
        y[i] = x[i];
    }*/
    for (i=0;i<n;i++)
    {
            if(x[i]=x[i])
            {
            m=1;
            }
    }
    for (i=0;i<n;i++)
    {
            if(x[i]=x[i])
            {
            count=count +1;
            }
    }


    for (i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf ("same number %d",count);
     /*for (i=0;i<n;i++)
    {
        printf("%d\n",y[i]);
    }*/


}
