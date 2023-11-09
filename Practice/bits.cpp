#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 10;
    int start=9;
    int current = 9;
    for(int i = 2;i<=n;i++){
        current = current* (start--);
        ans = ans+current;
    }
    cout<<ans;
}