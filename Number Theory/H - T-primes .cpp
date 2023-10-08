#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
bool f[N];
void seive() {
    f[1] = false;
    for (int i = 2; i < N; i++) {
        f[i] = true;
    }
    for (int i = 2; i < N; i++) {
        if (f[i]) {
            for (int j = i + i; j < N; j += i) {
                f[j]=false;
            }
        }
    }

}
int main() {
    seive();
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        long long x;cin>>x;

        int p = sqrtl(x);
        while(1ll*p*p<x) ++p;
        while(1ll*p*p>x) --p;
        if(1ll*p*p==x){
            if(f[p]){
                cout<<"YES"<<nl;
            }
            else{
                cout<<"NO"<<nl;
            }
        }
        else{
            cout<<"NO";
        }
    }

}