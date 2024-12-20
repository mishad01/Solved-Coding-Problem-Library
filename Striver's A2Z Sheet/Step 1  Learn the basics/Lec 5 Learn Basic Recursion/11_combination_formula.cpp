/*
combination formula, nCr = n!/r!(n-r!);
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fact (int n){
	if(n<=1){
		return 1;
	}
	return fact(n-1)*n;
}
int ncr(int n,int r){
	int t1,t2,t3;
	t1 = fact(n);
	t2 = fact(r);
	t3 = fact(n-r);
	return t1 / (t2 * t3);
}

int NCR(int n, int r){
	if(n==r || r==0){
		return 1;
	}
	return NCR(n-1,r-1)+NCR(n-1,r);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<ncr(5,3);
    return 0;
}