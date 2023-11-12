#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	int k;
	int res;
	cin>>n>>k;
	for(int i = 0;i<k;i++)
	{
		if(n%10 != 0)
		{
			n--;
		}
		else
		{
			n=n/10;
		}
		cerr<<n<< " ";
    }
	cout<<n;


}