#include<stdio.h>
int main ()
{
    int x[100];
    int size;
    int i;
    int even,odd;

    printf("Input the number of element");
    scanf ("%d",&size);

    printf ("Input the 5 elements in the array");
    for (i=0;i<size;i++)
    {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<size;i++)
    {
        printf ("Element -%d : %d\n",i,x[i]);
    }
    for (i=0;i<size;i++)
    {
        //for(j=)
        if (x[i]%2 == 0)
        {
            even++;
        }
        else
        {
            printf("Odd\n");
        }


    }
    printf ("The Even elements are :%d\n",even);
    //printf ("The odd elements are : %d\n",odd);
}
