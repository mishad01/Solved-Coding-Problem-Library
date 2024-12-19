#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
/*
      |1              if n == 0  |
pow = |                          |
      |m*pow(m,n-1)   if n>0     | 
*/
int pow(int m,int n){
	if(n==0){ 
		return 1;
	}
	return m*pow(m,n-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<pow(4,3);
    return 0;
}