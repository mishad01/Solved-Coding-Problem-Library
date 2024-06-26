#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N];
bool vis[N];
int dis[N],par[N];

//We use bfs to find the shortest path

void bfs(int u){
	queue<int>q;
	q.push(u);
	vis[u]=true;
	while(!q.empty()){
		int fv = q.front();
		q.pop();
		//cout<<fv<<" ";
		for(auto x : g[fv]){
			if(!vis[x]){
				par[x]=fv;
				q.push(x);
				vis[x]=true;
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
    bfs(1);
    for(int i = 1;i<=n;i++){
    	cout<<"Parent node of "<<i<<" is : "<<par[i]<<nl;
    }
}