#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 1;
vector<int>g[N];
int dis[N];
bool vis[N];
int par[N];

//We use dfs for traversing
void dfs(int u) {
	cout << u << " ";
	vis[u] = true;
	for (auto x : g[u]) {
		if (!vis[x]) {

			dfs(x);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1);
	for(int i = 1;i<=n;i++){
		if(!vis[i]){
			cout<<"Disconnected Graph"<<nl;
			return 0;
		}
	}
	cout<<"Connected Graph"<<nl;
}
//Basically if there isn't any path then vis[i] wont be true and it will give disconnected graph