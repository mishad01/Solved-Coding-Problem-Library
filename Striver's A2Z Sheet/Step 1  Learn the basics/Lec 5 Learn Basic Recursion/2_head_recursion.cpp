#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

/*
	1. If a recursive function is calling itself and
	and that call is the first statement in a function
	then it is called head recursive.
	
	2. tailRec(n - 1)+ n -> It's not a tail recursive function
*/
int headRec(int n) {
	if (n == 0) {
		return 1;
	}
	headRec(n - 1); //head recursion
	cout << n << " ";
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	headRec(5);
	return 0;
}