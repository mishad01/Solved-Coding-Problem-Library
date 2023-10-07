#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const ll MAX = 1e18;
int main() {
    ll p2 = 1;
    vector<ll>v;
    for (int x = 0; p2<MAX; x++, p2 *= 2) { //Here p2 *= 2 means 2^x
        //p2 = 2^x;
        ll p3 = 1;
        for (int y = 0; p2*p3<MAX; y++, p3 *= 3) {
            //p3 = 3^x;
            ll p5 = 1;
            for (int z = 0; p2*p3*p5<MAX; z++, p5 *= 5) {
                //p5 = 5^x;
                v.push_back(p2*p3*p5);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<"The 1500'th ugly number is "<<v[1500-1]<<".";
}