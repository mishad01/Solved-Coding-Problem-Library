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
    cout<<n;
}
/*
AND -> 
X & 1 = X
X & 0 = 0

OR->
X | 1 = 1
X | 0 = X

XOR->
Similar = 0
X ^ 1 = !X [x==0 then x ==1, x==1 then x==0]
X ^ 0 = X


