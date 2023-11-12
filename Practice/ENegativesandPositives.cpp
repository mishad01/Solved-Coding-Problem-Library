#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin>>num;
	
	while(num--)
	{
		int count = 0;
	    int sum = 0;
		int n;
		cin>>n;
		int  a[n];
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
			{
				count++;
			}
			if(count<3)
			{
				a[i]=abs(a[i]);
			}
		}
			
		for(int i = 0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		//cout<<sum<<endl;
		cout<<endl;
		

	}
	
}