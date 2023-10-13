#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int q;cin>>q;
	int n;cin>>n;
	while(q--){
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		for(int i = n-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<nl;
	}
}