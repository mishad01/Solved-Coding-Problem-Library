#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
    int q;
    cin>>q;
    while(q--){
        ll n,a,b,c;
        vector<int>divs;
        cin>>n>>a>>b>>c;
        int ans = 0;
        for(int i = 1;i*i<=n;i++){
            if(n%i==0){
                divs.push_back(i);
                if(i!=n/i){
                    divs.push_back(n/i);
                }
            }
        }
        for(auto x : divs){
            if(x<=a){
                for(auto y : divs){
                    if(y<=b){
                        // for(auto z : divs){
                        //     if(z<=c){
                        //         if(x*y*z==n){
                        //             ++ans;
                        //         }
                        //     }
                        // }
                        if(n%(1ll*x*y)==0){
                            int z = n/(x*y);
                            if(z<=c){
                                ++ans;
                            }
                        }
                        
                    }
                }
            }
        }
        cout<<ans<<nl;
    }
}