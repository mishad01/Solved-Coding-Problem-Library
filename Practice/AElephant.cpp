#include<bits/stdc++.h>
using namespace std;
#define s " "
int main()
{
	double n;
	cin>>n;
	double a,b,c,d,e;
	if(n>0)
	{
		a=ceil(n/1);
	}
	if(n>0)
	{
		b=ceil(n/2);
	}
	if(n>0)
	{
		c=ceil(n/3);
	}
	if(n>0)
	{
		d=ceil(n/4);
	}
	if(n>0)
	{
		e=ceil(n/5);
	}
    cout<<min({a,b,c,d,e});
   //cout<<e;
}