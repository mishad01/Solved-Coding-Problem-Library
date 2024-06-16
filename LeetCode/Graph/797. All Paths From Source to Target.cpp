class Solution {
public:
    vector<vector<int>>res;
    vector<int>path;
    void dfs(vector<vector<int>>& g,vector<int>&vis,int u){
        int n = g.size()-1;
       // vis[u]=true;
        path.push_back(u);
        if(u==n){
            res.push_back(path);
        }else{
            for(auto x : g[u]){
                if(!vis[x]){
                    vis[x]=true;
                    dfs(g,vis,x);
                    vis[x]=false;
                }
            }
        }
        path.pop_back(); 
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,0);
        dfs(graph,vis,0);
        return res;
    }
};

/*Initial Call:

Call dfs(graph, vis, 0).
path starts as [0].
visited[0] is implicitly treated as true for the duration of this DFS call.
DFS from Node 0:

Current Path: [0]

Neighbors of 0: 1 and 2

Explore Node 1:

path becomes [0, 1].
visited[1] = true.
Call dfs(graph, vis, 1).
DFS from Node 1:

Current Path: [0, 1]

Neighbors of 1: 3

Explore Node 3:

path becomes [0, 1, 3].
visited[3] = true.
Call dfs(graph, vis, 3).
DFS from Node 3:

Current Path: [0, 1, 3]
Node 3 is the target (g.size() - 1).
Add [0, 1, 3] to res.
Backtrack:
visited[3] = false: Unmark node 3 as visited so other paths can use it.
path reverts to [0, 1].
Back to DFS from Node 1:

Current Path: [0, 1]
No more neighbors to explore.
Backtrack:
visited[1] = false: Unmark node 1 as visited so other paths can use it.
path reverts to [0].
Back to DFS from Node 0:

Current Path: [0]

Explore Node 2:

path becomes [0, 2].
visited[2] = true.
Call dfs(graph, vis, 2).
DFS from Node 2:

Current Path: [0, 2]

Neighbors of 2: 3

Explore Node 3:

path becomes [0, 2, 3].
visited[3] = true.
Call dfs(graph, vis, 3).
DFS from Node 3:

Current Path: [0, 2, 3]
Node 3 is the target (g.size() - 1).
Add [0, 2, 3] to res.
Backtrack:
visited[3] = false: Unmark node 3 as visited so other paths can use it.
path reverts to [0, 2].
Back to DFS from Node 2:

Current Path: [0, 2]
No more neighbors to explore.
Backtrack:
visited[2] = false: Unmark node 2 as visited so other paths can use it.
path reverts to [0].
Back to DFS from Node 0:

Current Path: [0]
No more neighbors to explore.
path reverts to [].
Final Result
res contains [[0, 1, 3], [0, 2, 3]].

*/