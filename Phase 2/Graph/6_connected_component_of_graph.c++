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
	//cout << u << " ";
	vis[u] = true;
	for (auto x : g[u]) {
		if (!vis[x]) {
			dfs(x);
		}
	}
}

//A component is when each node is connected to the other one in the same component.
int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans = 0;
	for(int i = 1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			ans++;
		}
	}
	cout<<"Connected Components = " <<ans;
}
