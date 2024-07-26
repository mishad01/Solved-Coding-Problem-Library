#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int a[100];
bool binary_search(int l,int r,int x){
    if(l>r) return false;
    int mid = (l+r)/2;
    if(a[mid]==x) return true;
    else if(x<a[mid]){
        return binary_search(l,mid-1,x);
    }else{
        return binary_search(mid+1,r,x);
    }
}
int main() {
    int n,x;
    cin>>n>>x;
    for(int i = 1;i<=n;i++){
    	cin>>a[i];
        //cout<<a[i]<<nl;
    }
    int l = 1,r = n;
    if(binary_search(l,r,x)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}