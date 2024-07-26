#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int res= 0;
int sum(int n){
    cout<<"We are at "<<n<<nl;
    if(n==0){
        cout<<"Base Condition - >Do not need to go more"<<nl;
        return 0;
    }
    res = sum(n-1)+n;
    cout<<"Returning to "<<res<<nl;
    return res;
}
int main() {
    int n;
    cin>>n;
    cout<<sum(n);
}