#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	int x = a + b * c;
	int y = a * (b+c);
	int z = a * b * c;
	int k = (a+b)*c;
	int w = a+b+c;

	//cout<<x<<" "<<y<<" "<<z<<" "<<k<<" "<<w;

	 cout<<max({x,y,z,k,w});
	 
}