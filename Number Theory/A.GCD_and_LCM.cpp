#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)return b;
	if(b==0) return a;
	if(a<b) swap (a,b);
	return gcd(a%b,b);
}
int lcm (int a,int b){
	return a*b/gcd(a,b);
}
int main(){
	int q;
	cin>>q;
	while(q--){
		int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
}