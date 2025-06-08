#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    std::vector<string> v;
    string temp = "";
    for(int i = 0;i<=n;i++){
    	for(int j = 0;j<=n;j++){
    		for(int k = 0;k<=n;k++){
    			if(i+j+k<=n){
    				temp = to_string(i)+" "+to_string(j)+" "+to_string(k);
    				v.push_back(temp);
    			}
    		}
    	}
    }
    for(auto x : v){
    	cout<<x<<nl;
    }
}