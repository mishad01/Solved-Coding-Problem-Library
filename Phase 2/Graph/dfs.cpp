#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int>g[N];
bool vis[N];

//Function to check in which 3node we are in
void dfs(int u) {  
    vis[u] = true;  // Mark the current node as visited
    for (auto v : g[u]) {  // Iterate through all the adjacent nodes
        if (!vis[v]) {  // Check if the node is not visited
            dfs(v);  // Recursively call DFS on the adjacent node
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

    for(int i = 1;i<=n;i++){
    	if(!vis[i]){
    		cout<<"Disconnected Graph"<<nl;
    		return 0;
    	}
    }
    cout << "Connected Graph" << nl;
}

