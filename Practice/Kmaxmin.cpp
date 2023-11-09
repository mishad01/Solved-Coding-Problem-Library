#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,c;
	cin >>a>>b>>c;
	int max;
	int min;

	
	if (a>b)
		max=a;
	if(b>c)
		max=b;
	if (c>a)
		max=c;
    if(a>b) 
			min =b;
	if(b>c)
		    min=c;
	if(c>a)
		    min=a;

	cout<< min <<" "<< max;

}
