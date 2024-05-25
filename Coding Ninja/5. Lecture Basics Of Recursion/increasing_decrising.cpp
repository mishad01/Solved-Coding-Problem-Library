#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void increasing(int n){
	if(n==0){
		return ;
	}
	increasing(n-1);
	cout<<n;
}
void dec(int n){
	 cout<<n;
	if(n==0){
		return ;
	}
	increasing(n-1);
}
int main() {
 int n;
 cin>>n;   
 dec(n);
}