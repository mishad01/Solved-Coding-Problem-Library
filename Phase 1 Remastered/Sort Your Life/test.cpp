#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n,x;cin>>n>>x;
    int a[n];
    for(int i = 1;i<=n;i++){
    	cin>>a[i];
    }
    int l=1,r=n;
    while(l<=r){
    	int mid = (l+r)/2;
    	if(a[mid]<x){
    		l = mid+1;
    	}else if(a[mid]>x){
    		r = mid-1;
    	}else if(x==a[mid]){
            cout<<"True"<<nl;
            break;
        }
    }
}