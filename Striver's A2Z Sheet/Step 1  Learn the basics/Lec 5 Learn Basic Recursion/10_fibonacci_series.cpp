#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fib(4);
    return 0;
}