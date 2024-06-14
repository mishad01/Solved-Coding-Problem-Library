#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e9+7;
vector<int>g[N];
bool vis[N];

void dfs(int u){
	cout<<u;
	vis[u];
	for(auto x : g[x]){
		if(!vis[x]){
			vis[x]=true;
			dfs(x);
		}
	}
}
int main() {
     int n,m;
    cin>>n>>m;
    while(m--){
    	int u,v;
    	cin>>u>>v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    dfs(1);
}