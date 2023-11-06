#include<stdio.h>
int main (void)
{   int n;
    int i;

    printf ("Input number of elemnt");
    scanf ("%d",&n);
    int x[n];

    printf ("Input Values");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &x[i]);
    }
    //printf ("%s %12s\n","element", "value");
    for (i=0;i<n;i++)
    {
        printf ("Element - %d : %d\n",i,x[i]);
    }
    return 0;
}
