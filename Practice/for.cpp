#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int n;
    cout<<"Input number";
    cin>>n;
    int sum=0;
    int i;
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<sum;

}