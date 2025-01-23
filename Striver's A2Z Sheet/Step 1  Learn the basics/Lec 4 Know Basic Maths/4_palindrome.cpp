#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 11712;
    int test = n;
    int revNum = 0;
    while(n>0){
    	int lastDigit = n%10;
    	n/=10;
    	revNum = (revNum*10)+lastDigit;
    }
    if(test==revNum){
    	cout<<"Palidrome"<<nl;
    }else{
    	cout<<"Not Palidrome"<<nl;
    }
    return 0;
}