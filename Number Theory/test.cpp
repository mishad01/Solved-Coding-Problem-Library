#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,k;
	cin>>n>>k;
	vector<int>v;
	for(ll i = 1;i*i <=n;i++){
		if(n%i==0){
			v.push_back(i);
			if(i!=n/i)
			v.push_back(n/i);
		}
	}
	sort(v.begin(),v.end());
	--k;
	cerr<<v.size();
	if(v.size()<=k){
		cout<<-1;
	}
	else{
		cout<<v[k]<<endl;
	}


}