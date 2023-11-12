#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>mp;
	int num;
	cin>>num;
	int n,y;
	string x;
	while(num--)
	{
		cin>>n;
		if(n==1)
		{
			cin>>y>>x        ;
			mp[x]+=y;
		}
		else
		{
			cin>>x;
			if(n==2)
			{
				mp.erase(mp.find(x));
			}
			else if(n==3)
			{
				if(mp.find(x)!=mp.end())
				{
					cout<<mp[x]<<endl;
				}
				else
				{
					cout<<"0"<<endl;
				}
			}
		}
	}
}
