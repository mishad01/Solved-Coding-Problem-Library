#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	string a;
	cin>>a;
	int sum = 0;
	cerr<<a[0];
	for(int i = 0;i<a.size();i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]=a[i]+32;
		}
		else if(a[i]==','){
			a[i]=' ';
		}
		else if(a[i]>='a' && a[i]<='z'){
			a[i]=a[i]-32;
		}
	}
	cout<<a;
	
}