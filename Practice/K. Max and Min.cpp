#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >>a>>b>>c;
    int ma = a;
    int mi = a;



    if (b>ma)
    {
        ma=b;
    }
    if (c>ma)
    {
        ma=c;
    }
    if (b<mi)
    {
        mi=b;
    }
    if(c<mi)
    {
        mi=c;
    }

    cout<< mi <<" "<< ma;

}
