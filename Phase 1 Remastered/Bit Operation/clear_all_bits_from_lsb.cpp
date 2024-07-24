/*
0000 = 0
0001 = 1
0010 = 2
0011 = 3
0100 = 4
0101 = 5
0110 = 6
0111 = 7
1000 = 8
1001 = 9
1010 = 10
1011 = 11
1100 = 12
1101 = 13
1110 = 14
1111 = 15
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n,i;
    cin>>n>>i;
    int a = (1<<i+1);
    cout<<a<<nl;
    a = (a-1);
    cout<<a<<nl;
    int x = ~a<<nl;

    cout<<~((1<<(i+1))-1);
    cout<<n & x;

}