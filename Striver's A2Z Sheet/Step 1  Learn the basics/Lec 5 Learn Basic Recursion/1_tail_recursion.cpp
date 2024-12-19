#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
/*
	1. If a recursive function is calling itself and
	and that call is the last statement in a function
	then it is called tail recursive.
	
	2. tailRec(n - 1)+ n -> It's not a tail recursive function
*/
int tailRec(int n) {
	if (n == 0) {
		return 1;
	}
	cout << n << " ";
	tailRec(n - 1);
}

tailRecInLoop(int n){
	while(n>0){
		cout<<n<<" ";
		n--;
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//tailRec(5);
	tailRecInLoop(5);
	return 0;
}