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
    int n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<"Power of 2"<<nl;
    }else{
        cout<<"Not Power of 2"<<nl;
    }
}