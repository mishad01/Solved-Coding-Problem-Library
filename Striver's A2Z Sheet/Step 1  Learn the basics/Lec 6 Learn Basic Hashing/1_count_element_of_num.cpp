#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v = {1,2,3,4,4,5,5,5,1};
    map<int,int>mp;
    for(auto x : v){
        mp[x]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<nl;
    }
    return 0;
}