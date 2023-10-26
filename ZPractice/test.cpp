#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n;
    cin>>n;
    int count = 0;
    while(n!=1){
        int num = n%10;
        count++;
        n/=10;
    }
    cout<<count;
}