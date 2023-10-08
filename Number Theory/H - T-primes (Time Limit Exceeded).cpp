#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int q; cin >> q;
    while (q--) {
        int n;
        cin>>n;
        int count = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cerr<<n%i<<endl;
                count++;
                if (i != n / i) {
                    count++;
                }
            }
        }
        if(count==3){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }
}    