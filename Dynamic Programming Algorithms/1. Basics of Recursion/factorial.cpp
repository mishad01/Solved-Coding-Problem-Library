#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int factorial(int n){
	if(n==0){
		return 1 ;
	}
	int s1 = factorial(n-1);
	return n * s1;
}
int main() {
 int n;
 cin>>n;
 cout<<factorial(n);   
}