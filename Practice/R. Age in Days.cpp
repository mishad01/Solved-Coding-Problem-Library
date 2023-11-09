#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    int y=num/365;
    num = num%365;
    int m = num/30;
    int d = num%30;
    cout<<y<< " years"<<endl;
    cout<<m<< " months"<<endl;
    cout<<d<< " days"<<endl;

}
