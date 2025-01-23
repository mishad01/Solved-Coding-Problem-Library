#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //Way 1
    int n = 153;
    int pr = 3;
    int test = n;
    int armStrongNum=0;
    while(n>0){
        int res = n%10;
        armStrongNum+=round(pow(res, pr));
        n = n/10;
    }

    //cerr<<armStrongNum;
    if(test==armStrongNum){
    	cout<<"Armstrong Number"<<nl;
    }else{
    	cout<<"Not Armstrong Number"<<nl;
    }
}