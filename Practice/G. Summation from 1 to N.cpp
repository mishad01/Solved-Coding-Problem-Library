#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    unsigned long long num;
    unsigned long long sum;
    cin>>num;

    sum = (num*(num+1))/2;
    cout<<sum;
}
