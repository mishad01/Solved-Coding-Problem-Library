#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int res = 0;
int resp = 0;
void print(int n ){
	if(n==1){
		cout<<1<<endl;
		return;
	} 
	cout<<n<<nl;
	print(n-1);
}
int sum(int n){
	if(n==1) {
		res=res+1;
		return res ;
	}
	res = res+n;
	sum(n-1);
}

int powof3(int n){
	resp = n*n*n;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//print(5);
	cout<<sum(20);
}