#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = -123;
    int revNum = 0;
    int sign =(n<0) ? -1 : 1; //Reverse negative numbers as well
    n = abs(n);

    while(n>0){
    	int lastDigit = n%10;
    	n=n/10;
    	revNum = (revNum*10)+lastDigit;
    }
    cout<<(sign * revNum);
    return 0;
}