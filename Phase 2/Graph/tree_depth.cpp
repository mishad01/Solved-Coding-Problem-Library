#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5+9;
vector<int> g[N];
int indegree[N], outdegree[N];
bool vis[N];
int col[N];
bool cycle = false;
int depth [105];

void dfs(int u,int p){ //p = parent
	depth[u]=depth[p]+1;
	for(auto v : g[u]){
		if(v!=p){
			dfs(v,u);
		}
	}
}
int main() {
	int n, m;
    cin >> n >> m;

    // Read the edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    for(int i =1;i<=n;i++){
    	cout<<depth[i]<<nl;
    }
}
