#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
// int binary_search(int x,int size){
//     int l = 0  
// }
int main() {
    int n,x;
    cin>>n>>x;
    bool check = false;
    int a[n];
    for(int i = 1;i<=n;i++){
    	cin>>a[i];
        //cout<<a[i]<<nl;
    }
    int l = 1,r = n;
    while(l<=r){
        int mid = (l+r)/2;
        cerr<<"Mid : "<<mid<<nl;
        cerr<<"Left right : "<<l<<" "<<r<<nl;
        if(x<a[mid]){
            r = mid-1;
        }else if(x>a[mid]){
            l = mid+1;
        }else if(x==a[mid]){
            check = true;
            break;
        }
    }
    if(check){
        cout<<"YES";
    }

}