#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long n,m,x,y,z;
	cin>>n>>m;
	int a;
	cin>>a;

	if(n%a==0)
	{
		x=n/a;
	}
	else
	{
		x=n/a+1;
	}
	if(m%a==0)
	{
		y=m/a;
	}
	else
	{
		y=m/a+1;
	}
	z = ceil(x*y);
	cout<<z;


}