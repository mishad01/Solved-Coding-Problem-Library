#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string a;
	cin>>a;
	//cout<<a;
	int x = 0;
	int y =0;
	int res=0;
	for(int i = 0;i<a.length();i++)
	{
		if(a[i]=='1')
		{
			x++;
			y=0;
		}
		else
		{
			y++;
			x=0;
		}
		//cerr<< x<<"  "<<y<<endl;
		if(x==7 || y==7)
		{ 
			res=1;
		}
	}
	if(res==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

}		
	
