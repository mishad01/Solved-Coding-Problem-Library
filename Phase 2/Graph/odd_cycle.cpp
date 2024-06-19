#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 1;
vector<int>g[N];
int dis[N];
bool vis[N];
int col[N];
bool ok=true;


//For even we can find out bycoloring
//For odd we can't find out
void dfs(int u) {
	cout << u <<endl;
	vis[u] = true;
	for (auto x : g[u]) {
		if (!vis[x]) {
			col[x]=col[u]^1; //col[x]=1; //col[u]=0 because if there is nothing that means 0
			dfs(x);
		}else{
			if(col[u]==col[x]){
				ok = false;
			}
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
	/*
	The loop ensures that every vertex is checked,
	even if the graph has multiple disconnected components.
	It calls dfs for each unvisited vertex to ensure that all parts of the graph are explored.
	This is essential for correctly determining if the entire graph is bipartite,
	especially in the case of disconnected components.
	*/
	for(int i = 1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
		}
	}
	//ok = true;
	dfs(1);
	if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
/*
Starting DFS from Node 1
Node 1:
Visit node 1 (vis[1] = true).
Assign color 0 to node 1 (col[1] = 0).
Print 1.
Neighbors of Node 1

Node 2:
Node 2 is unvisited.
Visit node 2 (vis[2] = true).
Assign color 1 to node 2 (col[2] = 1).
Print 2.
Neighbors of Node 2

Node 5 (from Node 2):
Node 5 is unvisited.
Visit node 5 (vis[5] = true).
Assign color 0 to node 5 (col[5] = 0 because col[5] = col[2] ^ 1 where col[2] = 1, so 0 = 1 ^ 1).
Print 5.

Neighbors of Node 5
Node 3 (from Node 5):
Node 3 is unvisited.
Visit node 3 (vis[3] = true).
Assign color 1 to node 3 (col[3] = 1 because col[3] = col[5] ^ 1 where col[5] = 0, so 1 = 0 ^ 1).
Print 3.
Conflict Detection
While processing Node 5, we also check Node 3 and Node 2 as its neighbors:
Node 2 is already visited and has a different color (col[2] = 1 and col[5] = 0), so no conflict here.
However, Node 3 is revisited from Node 5 and we detect a conflict because both Node 3 and Node 5 would have the same color if Node 5 is colored again (col[3] = col[5] when revisited from Node 3). This indicates that the graph is not bipartite.
Set ok = false.
Continuing DFS (although already detected as not bipartite)
Node 4 (from Node 1):
Node 4 is unvisited.
Visit node 4 (vis[4] = true).
Assign color 1 to node 4 (col[4] = 1 because col[4] = col[1] ^ 1 where col[1] = 0, so 1 = 0 ^ 1).
Print 4.
Final State
Nodes visited: 1, 2, 5, 3, 4.
Colors assigned: col[1] = 0, col[2] = 1, col[5] = 0, col[3] = 1, col[4] = 1.
Conflict detected between nodes 3 and 5.
ok = false.
*/