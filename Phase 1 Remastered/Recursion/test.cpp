#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int printAsc(int n){
    if(n==0) return 1;
    printAsc(n-1);
    cout<<n<<nl;
}

int printDes(int n){
    if(n==0) return 1;
    cout<<n<<nl;
    printDes(n-1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<"printDesc"<<nl;
    printDes(5);
    cout<<"printAsc"<<nl;
    printAsc(5);
}