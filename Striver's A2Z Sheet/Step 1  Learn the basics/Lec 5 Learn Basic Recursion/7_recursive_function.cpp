#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fact(int n){
	if(n==0){
		return 1;
	}
	return n * fact(n-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //Factorial -> n!
    cout<<fact(3);
    return 0;
}