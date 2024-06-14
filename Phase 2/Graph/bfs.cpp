#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5;
vector<int>g[N];
bool vis[N];

int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	queue<int>q;
	q.push(0);
	vis[0] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		cout << u << " "; // Print the node as it is visited

		for (auto x : g[u]) {
			if (!vis[x]) {
				q.push(x);
				vis[x] = true;
			}
		}
	}
	cout<<nl;
}