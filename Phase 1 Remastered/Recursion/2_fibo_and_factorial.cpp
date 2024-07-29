#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fibonaaci(int n){
	//cout<<"We are at "<<n<<nl;
	if(n==0)return 0;
	if(n==1)return 1;
	return fibonaaci(n-1)+fibonaaci(n-2);
}
int factorial(int n){
	if(n==1)return 1;
	return factorial(n-1)*n;
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n)<<nl;
    cout<<fibonaaci(n)<<nl;
}