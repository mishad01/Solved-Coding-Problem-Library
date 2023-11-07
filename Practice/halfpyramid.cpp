#include<iostream>
using namespace std;
int main ()
{
    int n;
    int c = 5;

    cout<<"Input a number : ";
    cin>>n;

    for (int i = n;i>=1;i--)
    {
        for (int j =1;j<=i;j++)
        {
            cout<<" "<<c;

        }
        cout<<endl;

    }


return 0;}
