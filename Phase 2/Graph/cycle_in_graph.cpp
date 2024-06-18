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
/* 
Input 
5 6
1 2 
2 3
3 4
3 5
5 2
5 4

Step-by-Step Execution
Start DFS from Node 1:

Visit node 1 (col[1] = 1).
Move to node 2 (col[2] = 1).
Visit Node 2's Neighbors:

Move to node 3 (col[3] = 1).
Visit Node 3's Neighbors:

Move to node 4 (col[4] = 1).
After visiting node 4, mark it as fully processed (col[4] = 2).
Back to node 3, move to node 5 (col[5] = 1).
Visit Node 5's Neighbors:

Move to node 2 (col[2] = 1), which is already being visited, indicating a cycle (cycle = true).*/
//FIND Circle
void dfs(int u){
	col[u]=1;
	for(auto v : g[u]){
		if(col[v]==0){
			dfs(v);
		}else if(col[v]==1){
			cycle = true;
		}
	}
	col[u]=2;
}
int main() {
	int n, m;
    cin >> n >> m;

    // Read the edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        //g[v].push_back(u);
    }
    dfs(1);
    cout<<(cycle ? "'Yes'" : "'No'");
}
