#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N],color[N];
bool vis[N];
bool ok = true;


//We use dfs for traversing
void dfs(int u){
	vis[u]=true;
	for(auto x : g[u]){
		if(!vis[x]){
			color[x]=color[u]^1;
			dfs(x);
		}else{
			if(color[u]==color[x]){
				ok = false;
			}
		}
	}
}

int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
    	int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
    }
    for(int i = 1;i<=n;i++){
    	if(!vis[i]){
    		dfs(i);
    	}
    }
    if(ok){
    	cout<<"Yes\n";
    }else{
    	cout<<"No\n";
    }
}