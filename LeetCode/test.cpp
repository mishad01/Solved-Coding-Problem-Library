#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
 string s;
 getline(cin,s);
 for(int i = 0;i<s.size();i++){
    for(int j = 0;j<s[i].size();j++){
        cout<<s[j]<<nl;
    }
    cout<<i<<nl;
 } 
}