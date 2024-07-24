#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0;i<n;i++){
    	cin>>a[i];
    }
    for(int i = 0;i<n;i++){
    	if(a[i]==x){
    		cout<<"YES"<<nl;
    	}else{
    		cout<<"NO"<<nl;
    	}
    }
}