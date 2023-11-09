#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		if(i==0)
        {
            a[i]=toupper(a[i]);
        }
        
        
	}
cout<<a;

}
