#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	map<char,int>mp;
	string a; cin >> a;
	for(int i = 0;i<a.size();i++){
		mp[a[i]]++;
	}
	for(auto x : mp){
		cout<<x.first<<" : "<<x.second<<nl;
	}
}