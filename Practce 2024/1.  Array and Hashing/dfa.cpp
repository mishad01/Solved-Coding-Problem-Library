#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
    cin >> s;

    int state = 0;

    for(char c : s){
    	if(c=='1'){
    		state = 1-state;		
    	}
    }
    if(state==0){
    	cout << "Accepted" << nl;
    } else {
        cout << "Not Accepted" << nl;
    }
}