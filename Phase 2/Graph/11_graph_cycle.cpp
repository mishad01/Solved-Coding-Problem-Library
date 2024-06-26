#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N],color[N];
bool vis[N];
bool ok = true;
bool cycle;

//We use dfs for traversing
void dfs(int u){
	col[u]=1; //asume red
	for(auto x : g[u]){
		if(col[x]==0){
			dfs(x);
		}else if(col[v]==1){
			cycle = true;
		}
	}
	col[u]=2;
}

int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
    	int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		
    }
    
}