/*Unset ith bit
Send Feedback
You are given two integers N and i. You need to make ith bit of binary representation of N to 0 and return the updated N.
Counting of bits start from 0 from right to left.
Input Format :
Two integers N and i (separated by space)
Output Format :
Updated N
Sample Input 1 :
7 2
Sample Output 1 :
3
Sample Input 2 :
12 1
Sample Output 2 :
14
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n,i;
    cin>>n>>i;
    cout<<(n^(1<<i));
    //cout<<(1<<i);
}