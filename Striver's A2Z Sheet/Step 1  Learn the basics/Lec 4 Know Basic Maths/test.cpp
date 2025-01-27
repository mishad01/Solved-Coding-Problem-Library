#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n<3){
        cout<<"GOLD"<<nl;
    }else if(n>=3 && n<6){
        cout<<"SILVER"<<nl;
    }else if(n>=6){
        cout<<"BRONZE"<<nl;
    }
}