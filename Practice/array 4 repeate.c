#include<stdio.h>
int main ()
{
    int x[] = {1,2,3,4,5};
    int y[20];
    int i,n;
    printf ("Inter Number of Index");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        x[i]==y[i];
    }

    for (i=0;i<n;i++)
    {
        printf (" X= %d %d\n",i,x[i]);
    }


    for (i=0;i<n;i++)
    {
        printf (" Y = %d %d\n",i,x[i]);
    }

}
