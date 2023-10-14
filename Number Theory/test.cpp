#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int const N = 1e6 + 9;
int f[N];
vector<int>primes;
void seive() {
    f[1] = true;
    for (int i = 2; i < N; i++) {
        f[i] = true;
    }
    for (int i = 2; i < N; i++) {
        if (f[i]) {
            for (int j = i + i; j < N; j += i) {
                f[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (f[i]) {
            primes.push_back(i);
        }
    }

}
bool is 
int main() {
    seive();
    ll q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int count = 0;
        for(int i = 1;i<=n;i++){
            
        }
        cout<<count<<nl;
    }
}