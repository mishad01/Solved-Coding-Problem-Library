#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int n;
	cin>>n;
	int a[n];
	unordered_map<int,int>mp;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	ll ans = 0;

	for(int j = 1;j<=n;j++){
		ans += j-1-mp[a[j]];
		mp[a[j]]++;
	}
	cout<<ans;		
}
