#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    int b = x;
    int rem;
    int rev=0;
    bool res = true;
    while (b!=0)
    {
        rem = b%10;
        rev = rev*10 + rem;
        b = b/10;
    }
    if(x==rev && rev>0)
    {
        return res;
    }
    else
    {
       res = false;
       return res;
    }
}
int main ()
{
    int a;
    cin>>a;
    cout<<isPalindrome(a);
    
}