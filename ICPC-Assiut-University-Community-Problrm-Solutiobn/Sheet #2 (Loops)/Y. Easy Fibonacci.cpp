#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
 int fibonacci(int n){
 	if(n==0){
 		return 0;
 	}
 	if(n==1){
 		return 1;
 	}
 	int s1 = fibonacci(n-1);
 	int s2 = fibonacci(n-2);
 	return s1 + s2;
 }
int main(){
	int n ;
	cin>>n;
	for(int i = 0;i<n;i++){
		cout<<fibonacci(i)<<" ";
	}
}