#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fib(int n ){
	if(n==0){
		return 0;
	}
	int smalloutput1 = fib(n-1);
	int smalloutput2 = fin(n-2);

	return smalloutput1+smalloutput2;
}
int main() {
    int n;
    fibo(n);
}