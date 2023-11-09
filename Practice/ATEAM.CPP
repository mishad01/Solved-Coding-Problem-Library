#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int d,b,c;
	int n;
	cin>>n;
	int a[n];
	int i;
	int count=0;
	for( i=0;i<n;i++)
	{

        cin>>d>>b>>c;
		a[i]=d+b+c;
	}
	for(i=0;i<n;i++)
	{   
		if(a[i]>=2)
		{
			count++;
		}
	}
	cout<<count;


}
