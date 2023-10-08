#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e6;
int d[N];
int main(){
    for(int i = 1;i<N;i++){
        for(int j = i;j<N;j+=i){
            d[j]+=i;
            //cerr<<j<<" "<<d[j]<<nl;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<d[n]-n<<nl;
    }

}