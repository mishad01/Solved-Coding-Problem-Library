#include<stdio.h>
int main (void)
{
    int x[5];
    int i;
    for (i=0;i<5;i++)
    {
        scanf ("%d", &x[i]);
    }
    //printf ("%s %12s\n","element", "value");
    for (i=0;i<5;i++)
    {
        printf ("Element - %d : %d\n",i,x[i]);
    }



}
