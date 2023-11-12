#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string a;
	cin>>a;
	int x= 0;
	int y=0;
	bool t = true;
	for(int i = 0;i<a.length();i++)
	{
		if(a[i]=='4'&& a[i+1]=='7')
		{
			t;
		}
		else if(a[i]=='7'&& a[i+1]=='4')
		{
			t;
		}
		else if(a[i]=='4'|| a[i]=='7')
		{
			x++;
		}
		else
		{
			y++;
		}
	}
	if(t)
	{
		cout<<"YES"<<endl;
	}
	else if(a=="7"||a=="4")
	{
		cout<<"NO";
	}
	else if(x==a.length())
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}