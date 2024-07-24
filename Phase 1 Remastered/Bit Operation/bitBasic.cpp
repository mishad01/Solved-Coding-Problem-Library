#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n;
    cin>>n;
    if(n&(1<<3)){
    	cout<<"3rd bit is on"<<nl;
    }else{
    	cout<<"Not on"<<nl;
    }
    cout<<(1<<2); // 100
    //cout<<(5|(1<<1));
    cout<<(12&((1<<30)-1-(2<<1)))<<nl;

    // vector<inr>a(n);
    // for(int i = 0;i<n;i++){
    // 	cin>>a[i];
    // }
    // for(int mask = 0;mask<<(1<<n);mask++){
    // 	for(int i = 0;i<n;i++){
    // 		if((mask>>i)&1){

    // 		}
    // 	}
    // }
    cout<<__builtin_popcount(11)<<nl;
    cout<<__builtin_ctz(4);

}

// 1111
// 0100
// 1011
// 0110
// 0010



/*
0000 0
0001 1
0010 2
0011 3
0100 4
0101 5
0110 6
0111 7
1000 8
1001 9
1010 10
1011 11
1100 12
1101 13
1110 14
1111 15
*/