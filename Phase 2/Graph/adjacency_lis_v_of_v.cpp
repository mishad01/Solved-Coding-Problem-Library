#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 100;
int main() {
 int n,m;
 cin>>n>>m;
 vector<vector<int>>g(n+1);
 int maxx = 0;
 int val = 0;
 while(m--){
 	int u,v;
 	cin>>u>>v;
 	g[u].push_back(v);
 	g[v].push_back(u); 
 }
    for(int i = 1;i<=n;i++){
    	if(maxx<g[i].size()){
    		val=i;
    		maxx = g[i].size();
    	}
    }
    cout<<val;
}