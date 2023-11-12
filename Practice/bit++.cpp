#include<iostream>
using namespace std;
int main ()
{
	int X = 0;
	int a;
	cin>>a;
	string b;
	while(a--)
	{
		cin>>b;
		if(b=="++X")
	{
		++X;
	}
	else if(b=="--X")
	{
		--X;
	}
	else if(b=="X++")
	{
		X++;
	}
	else if(b=="X--")
	{
		X--;
	}
	}
	
	
    

	cout<<X;
}