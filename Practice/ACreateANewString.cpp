#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string s,t;
	getline(cin,s);
	getline(cin,t);
	int a=s.length();
	int b=t.length();

	if(a>b)
	{
		cout<<t;
	}
	else
	{
		cout<<s;
	}
	

}