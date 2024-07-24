/*Clear All Bits From MSB
You are given two integers N and i. You need to clear all bits from MSB to ith bit (start i from right to left) and return the updated N.
Counting of bits starts from 0 from right to left.

Sample Input 1 :
15 2
Sample Output 1 :
3
Sample Output 1 Explanation :
We need to clear all bits from MSB to ith bit i.e. clear all bits except 0th and 1st.
Sample Input 2 :
4 4
Sample Output 2 :
4*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n,i;
    cin>>n>>i;
    int a = (1<<i);
    //cout<<a<<nl;
    int b = a-1;
    //cout<<b<<nl;
    cout<<(n&b);
}
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