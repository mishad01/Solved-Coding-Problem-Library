#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        int a,b,c;
        cin>>a>>b>>c;
        int day = c*24*60;
        int total_time = a*b;
        if(day>=total_time){
            cout<<"YES"<<nl;
        }else{
            cout<<"NO"<<nl;
        }
    }


    return 0;
}
