#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 2e7 + 9;
bool f[N];
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
int main(){
    sieve();
    vector<pair<int,int>>v;
    for(int i = 1;i+2<N;i++){
        if(f[i] and f[i+2]){
            v.push_back(make_pair(i,i+2));
        }
    }
    int n;
    while(cin>>n){
        cout<<"("<<v[n-1].first<<", "<<v[n-1].second<<")"<<nl;
    }

}