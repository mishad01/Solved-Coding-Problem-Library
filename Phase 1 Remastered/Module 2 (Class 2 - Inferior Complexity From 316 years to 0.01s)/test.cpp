#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll sum = 0;
    ll oddNum ;
    while(n--){
        ll num;
        cin>>num;
        if(num % 2==1){
            oddNum = min(oddNum,num);
        }
        sum+=num;
    }
    if(sum%2==0){
        cout<<sum;
    }else{
        sum = sum - oddNum;
        cout<<sum;
    }
}