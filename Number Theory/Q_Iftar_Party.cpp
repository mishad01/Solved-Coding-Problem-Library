#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int count = 0;
	while(t--){
		int p,l;cin>>p>>l;
		int n = p-l;
		vector<int>v;
		for(int q = 1;(long long)q*q<=n;q++){
			if(n%q==0){
				if(l<q)
				v.push_back(q);
				if(q!=n/q & l< n/q)
				v.push_back(n/q);
			}
		}
		sort(v.begin(),v.end());
		++count;
		cout<<"Case "<<count<<": ";
		if(v.empty()){
			cout<<"impossible"<<endl;
		}
		else{
			for(auto x : v){
				cout<<x<<" ";
			}
			cout<<endl;
		}

	}
}