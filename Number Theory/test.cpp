#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
int f[N];
int sp[N];
int main() {
    int n;
    cin >> n;
    vector<int>v;
    f[1] = true;
    for (int i = 2; i <= n; i++) {
        if (f[i] == false) {
            v.push_back(i);
            for (int j = i+i; j <= n; j += i) {
                //cerr<<f[j]<<" ";
                f[j] = true;
            }
        }
    }
    for(auto x : v){
        cout<<x<<nl;
    }
}