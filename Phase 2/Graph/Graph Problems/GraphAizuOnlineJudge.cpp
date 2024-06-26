#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
int g[N][N];
int indegree[N], outdegree[N], color[N];
bool vis[N];
bool ok = true;
bool cycle;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int u, k;
        cin >> u >> k;
        while (k--) {
            int v;
            cin >> v;
            g[u][v] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << g[i][j];
            if (j < n) {
                cout << ' ';
            }
        }
        cout << nl;
    }
}
