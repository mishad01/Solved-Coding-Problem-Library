#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int pow_of_2(int n){
    cout<<"We are at "<<n<<nl;
    if(n==0)return 1;
    return pow_of_2(n-1)+pow_of_2(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<pow_of_2(n);
    cout<<pow_of_2(5);
}