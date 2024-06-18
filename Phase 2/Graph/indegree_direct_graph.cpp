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

    // Read the edges
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        indegree[v]++;
        outdegree[u]++;
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" indegree "<<indegree[i]<<nl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" Outdegree "<<outdegree[i]<<nl;
    }


    

    return 0;
}
