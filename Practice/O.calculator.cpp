#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if (c=='+')cout<<a+b;
    if (c=='-')cout<<a-b;
    if (c=='*')cout<<a*b;
    if (c=='/')cout<<a/b;

}
