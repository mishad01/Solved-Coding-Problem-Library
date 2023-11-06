#include<stdio.h>
int main (void)
{   int n;
    int x[n];
    int i;

    printf ("Input number if elemnt");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d", &x);
    }
    //printf ("%s %12s\n","element", "value");
    for (i=0;i<n;i++)
    {
        printf ("Element - %d : %d\n",i,x[i]);
    }
    return 0;
}