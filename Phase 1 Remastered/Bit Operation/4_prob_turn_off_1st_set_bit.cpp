/*
Turn off 1st set bit
You are given an integer N. You need to make first set bit of binary representation of N to 0 and return the updated N.
Counting of bits start from 0 from right to left.
Input Format :
Integer N 
Output Format :
Updated N
Sample Input 1 :
4
Sample Output 1 :
0
Sample Input 2 :
12 
Sample Output 2 :
8*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n;cin>>n;
    int m = 0;
    for(int i = 0;i<n;i++){
    	if(n&(1<<i)){
    		n = (n^(1<<i));
    		break;
    	}
    }
    cout<<n;
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