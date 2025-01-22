#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //Way 1
    int n = 56789;
    int count = 0;
    while(n>0){
        int res = n%10;
        count++;
        n = n/10;
    }
    cout<<"Total Count : "<<count<<nl;


    //2nd way to find count of digits
    int x = 5678;
    int cnt = log10(x)+1;
     cout<<"Total Count : "<<cnt<<nl;
    return 0;
}