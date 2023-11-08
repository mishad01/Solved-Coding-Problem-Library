#include<stdio.h>
int main ()
{
    int x[5] = {1,2,3,4,5};
    int y[5] = {1,2,3,4,5};
    int sizex;
    int sizey;
    int i;

    printf ("Input the size for first Array");
    scanf ("%d",&sizex);

    for(i=0;i<sizex;i++)
    {
        printf ("Element - %d : %d\n",i,x[i]);
    }

    printf ("Input the size for first Array");
    scanf ("%d",&sizey);
    for(i=0;i<sizey;i++)
    {
        printf ("%25s - %d : %d\n","Element",i,y[i]);
    }

    for (i=sizex-1;i>=0;i--)
    {
        printf ("%d %d ",x[i],y[i]);
    }

}
