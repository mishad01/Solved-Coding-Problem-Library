#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n];
	int aa=0;
	int bb=0;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i<n;i++)
	{
		if(a[i]=='A')
		{
			aa++;
		}
		else
		{
			bb++;
		}
	}
	//cout<<aa<<" "<<bb;
	if(aa==bb)
	{
		cout<<"Friendship"<<endl;
	}
	else if(aa>bb)
	{
		cout<<"Anton"<<endl;
	}
	else
	{
		cout<<"Danik"<<endl;
	}
}