#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main ()
{

	
	string a;
	cin>>a;
	int small = 0;
	int upper = 0;
	for(int i = 0;i<a.length();i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			small++;
		}
		else if (a[i]>='A' && a[i]<='Z')
		{
			upper++;
		}
	}
	if(small>=upper)
	{
		transform (a.begin(),a.end(),a.begin(), ::tolower);
		cout<<a;
	}
	if(small<upper)
	{
		transform (a.begin(),a.end(),a.begin(), ::toupper);
		cout<<a;
	}
	
}