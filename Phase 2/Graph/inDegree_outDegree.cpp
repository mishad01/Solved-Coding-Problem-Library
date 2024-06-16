#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> indegree(n + 1, 0);
    vector<int> outdegree(n + 1, 0);
    
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        
        // Update the outdegree
        outdegree[u]++;
        outdegree[v]++;
        
        // Update the indegree
        indegree[v]++;
        indegree[u]++;
    }
    
    // Print indegree and outdegree for each node
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " - Indegree: " << indegree[i] << ", Outdegree: " << outdegree[i] << nl;
    }

    return 0;
}
