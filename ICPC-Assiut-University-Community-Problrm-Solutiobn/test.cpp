#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int n;
	cin>>n;
	int fib[50];
	 fib[1] = 0;
	 fib[2] = 1;
	for(int i = 3;i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n];
}