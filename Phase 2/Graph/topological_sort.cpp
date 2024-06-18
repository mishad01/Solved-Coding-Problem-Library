#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N];
bool vis[N];

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize vis array to false
    //fill(vis, vis + N, false);

    // Read the edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        indegree[v]++;
    }

    vector<int> ans;

    while (ans.size() < n) {
        int cur = 0;

        // Find an unvisited node with indegree 0
        for (int i = 1; i <= n; i++) {
            if (!vis[i] && indegree[i] == 0) {
                cur = i;
                break;
            }
        }

        // If no such node is found, there might be a cycle in the graph
        if (cur == 0) {
            cout << "Cycle detected or graph is not a DAG" << endl;
            return 0;
        }

        // Mark the current node as visited
        vis[cur] = true;
        ans.push_back(cur);

        // Decrease the indegree of all adjacent nodes
        for (auto v : g[cur]) {
            indegree[v]--;
        }
    }

    // Output the topological order
    for (auto x : ans) {
        cout << x << endl;
    }

    return 0;
}

//output 1->4->2->3
