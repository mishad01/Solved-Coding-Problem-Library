#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	vector<long long>v;
	for(long long i = 1;i*i<=n;i++){
		if(n%i==0){
			v.push_back(i);
			if(i!=n/i){
				v.push_back(n/i);
			}
		}
	}
	sort(v.begin(),v.end());
	 --k;
	if(k>=v.size()){
		cout<<-1<<'\n';
	}
	else
	cout<<v[k];
}
