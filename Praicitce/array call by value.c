#include <stdio.h>
int main ()
{
    int b[5] = {1,2,3,4,5};
    int *bptr;
    bptr = &b[0];
    printf ("%d",bptr[3]);
}
