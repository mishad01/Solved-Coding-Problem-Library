#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int res = 1;
    string s;
    cin >> s;
    cerr<<s[1];
    if(s[0] == '0') { 
        res = 2;
    }
    if(s[1] == '1') {
        res = 3;
    } 

    for(int i = 2;i<s.size();i++){
    	if(s[i]=='0'){
    		res = 2;
    	}else if(s[i]=='1'){
    		res = 3;
    	}
    }
    //cerr << res;
    if(res == 3){
        cout << "Accepted" << nl;
    } else {
        cout << "Not Accepted" << nl;
    }

}
