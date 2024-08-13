#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
string check(vector<string>& arr) {
    int n = arr.size();
    unordered_map<string, int> mp;

    for (string c : arr) {
        mp[c]++;
    }
    for ( auto x: mp) {
        cout << x.first << ": " << x.second << std::endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<string>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    check(v);
}