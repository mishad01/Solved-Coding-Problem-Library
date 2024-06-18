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
    }

    vector<int>ans;
    while (ans.size() < n) {
        int cur = 0;
        for (int i = 1; i <= n; i++) {
            
            if (!vis[i] && indegree[i] == 0) {
                cur = i;
                vis[i] = true;
                break;
            }
        }
        ans.push_back(cur);

        for (auto v : g[cur]) {
            indegree[v]--;
        }
    }
    for (auto x : ans) {
        cout << x << endl;
    }





    return 0;
}
