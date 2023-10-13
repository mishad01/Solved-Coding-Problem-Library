#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int q;
	cin>>q;
	while(q--){
		string a;
		cin>>a;
		if(a.size()>10){
			cout<<a[0]<<a.size()-2<<a[a.size()-1]<<nl;
		}
		else{
			cout<<a<<nl;
		}
	}
}