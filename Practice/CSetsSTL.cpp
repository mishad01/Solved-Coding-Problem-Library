#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	set<int>s;
	while(num--)
	{
		
		int n,x;
		cin>>n>>x;
		if(n==1)
		{
			s.insert(x);
		}
		else if(n==2)
		{
			s.erase(x);
		}
		else if(n==3)
		{
			if(s.find(x)==s.end())
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}

		}

	}
}