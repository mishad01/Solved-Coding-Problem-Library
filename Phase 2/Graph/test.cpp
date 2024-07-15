#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n,x;
    cin>>n>>x;
    int res = 0;
    for(int i = 1;i<=n;i++){
        res = res + i;
        cerr<<res<<endl;
    }
    cout<< res * x;
}