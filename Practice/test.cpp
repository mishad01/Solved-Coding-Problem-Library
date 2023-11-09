#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,q;
  cin>>n>>q;
  int a[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  while(q--){
    int x;cin>>x;
    int l = 1,r=n,ans = 0;
    while(l<r){
        int mid =(l+r)/2;
        if(a[mid]<x){
            ans = mid;
        }
    }

  }
  
}

