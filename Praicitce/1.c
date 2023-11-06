#include<stdio.h>
int main (void)
{
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    /*for (i=0;i<10;i++)
    {
        scanf ("%d", &x);
    }*/
    //printf ("%s %12s\n","element", "value");
    for (i=0;i<10;i++)
    {
        printf ("Element - %d : %d\n",i,x[i]);
    }



}
