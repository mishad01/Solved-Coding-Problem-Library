#include<iostream>
using namespace std;
int main ()
{
    int num;

    cout<<"Enter a number";
    cin>>num;

    for (int i=2;i<num;i++)
    {
        if(num ==2)
        {
            cout<<"It's not a prime number "<<endl;
        }
        else if (num%i == 0 ){
            cout <<"It's not  prime number"<<endl;
            break;
        }
        else{
            cout<<"It's a prime number";
            break;
        }
    }
}
