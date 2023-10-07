#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const ll MAX = 1e18;
int main() {
  int n = 6;
    vector<ll>v;
        ll p2 = 1;
        for(int i = 0;p2<MAX;i++,p2*=2){
            ll p3 = 1;
            for(int j= 0;p2*p3<MAX;j++,p3*=3){
                ll p5 = 1;
                for(int k = 0;p2*p3*p5<MAX;k++,p5*=5){
                    v.push_back(p2*p3*p5);
                }
            }
        }
    sort(v.begin(),v.end());
    bool found = false;
    for (int i : v) {
        if (i == n) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "True";
    } else {
        cout << "False";
    }
}