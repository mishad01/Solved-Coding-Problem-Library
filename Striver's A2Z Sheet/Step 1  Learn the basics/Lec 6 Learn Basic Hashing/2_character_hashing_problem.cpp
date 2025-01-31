#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto x : s){
        mp[x]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<nl;
    }
    return 0;
}