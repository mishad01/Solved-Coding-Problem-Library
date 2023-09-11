#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h;
	cin>>n>>h;
	int a[n];
	int b[n];
	int sum = 0;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i =0;i<n;i++)
	{
		if(a[i]>h)
		{
			b[i]=2;
		}
		else
		{
			b[i]=1;
		}
	}
	for(int i =0;i<n;i++)
	{
		sum = sum+b[i];
	}
	cout<<sum;



}