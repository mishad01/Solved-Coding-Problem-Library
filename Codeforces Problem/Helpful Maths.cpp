#include<iostream>
#include<string>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	//cout<<a;
	//string temp;
	
	for(int i =0;i<a.size();i++)
	{
		for(int j =i+1;j<a.size();j++)
		{
			if(a[i]>a[j] && a[j]!='+')
			{
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(int i =0;i<a.size();i++)
	{
		cout<<a[i];
	}
}