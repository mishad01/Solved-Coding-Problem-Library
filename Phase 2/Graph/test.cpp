#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
const int N = 1e5 + 1; // Ensure size accommodates node number 100000
vector<int> g[N];

int main() {
    int n, m;
    cin >> n >> m;
    
    // Adjust the size of the graph to n+1 to be safe for 1-based indexing
    // If you want to use g[0] to g[n], N should be at least n+1
    // vector<int> g[n+1]; // Alternatively, can use dynamic allocation based on n

    // Reading edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // Print neighbors of node 1
    for (auto x : g[1]) {
        cout << x << endl;
    }
}
