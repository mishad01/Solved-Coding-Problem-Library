#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int res1;
    int res2;
    int sum = 0;  
     while(n>9)
     {
        res1=(n%10);
        res2=(n/10);
        sum = res1+res2;
        n=sum;  
     }      
     cout<<n;
}
