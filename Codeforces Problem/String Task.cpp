#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	transform(a.begin(),a.end(),a.begin(),::tolower);
	//cout<<a;
	//cout<<".";
	for(int i =0;i<a.size();i++)
	{
		if(a[i]=='a' | a[i]=='e' |a[i]=='i' |a[i]=='o' |a[i]=='u'| a[i]=='y')
		{
			a[i]=' ';
		}
		else
		{
			cout<<"."<<a[i];
		}
	}

}