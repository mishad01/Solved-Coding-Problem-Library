#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i = l1;i<=r1;i++){
        if(i<l2 || i>r2 ){
            cout<<i<<" ";
        }
    }

    return 0;
}