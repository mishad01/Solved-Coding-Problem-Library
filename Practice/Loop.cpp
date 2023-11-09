#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main ()
{


int text[100]={1,2,3,4,5,6,7,8,9};
int pat[100]={6,7,8,9};
{
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=1;j<4;j++)
        {
            if (text[i+j] == pat[j])
       {
            printf("%d         %d\n",text[i+j],pat[j]);
       }

        }

    }
}

}
