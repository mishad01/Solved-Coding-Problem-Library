#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e8;
bitset<N>f;
void sieve() {
    f[1]=false;
    for (int i = 2; i < N; i++) {
        f[i] = true;
    }
    for (int i = 2; i*i < N; i++) {
        if (f[i]) {
            for (int j = i * i; j < N; j += i) {
                f[j] = false;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    vector<int>v;
    for(int i = 2;i<N;i++){
        if(f[i]){
            v.push_back(i);
        }
    }
    for(int i = 0;i<v.size();i+=100){
        cout<<v[i]<<nl;
    }
}