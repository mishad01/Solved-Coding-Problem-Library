#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
    int q;
    cin>>q;
    int cs = 0;
    while(q--){
        int a;
        cin>>a;
        int div = 0;
        for(int i = 1;1ll*i*i<=a;i++){
            if(a%i==0){
                div++;
            }
        }
        cout<<"Case "<<++cs<<": "<<div<<nl;
    }
}