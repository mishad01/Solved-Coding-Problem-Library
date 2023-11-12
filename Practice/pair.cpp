#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
	for(int i = 2;i<a;i++)
	{
		if(a%i==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	cerr<<prime(n);
	if(prime(n))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}	
} 