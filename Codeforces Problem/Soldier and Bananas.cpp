#include<iostream>
using namespace std;
int main ()
{
	int k,n,w;
	cin>>k>>n>>w;
	int total=0;
	for(int i = 1;i<=w;i++)
	{
		total = total+i;
	}
	total=total*k;
	//cout<<total;
	if(total>n)
	{
		cout<<total-n;
	}
	else
	{
		cout<<"0";
	}
}