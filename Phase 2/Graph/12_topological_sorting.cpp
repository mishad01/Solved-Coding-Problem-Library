#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N], color[N];
bool vis[N];
bool ok = true;
bool cycle;

int main() {
	int n, m;
	cin >> n >> m;

	while (m--) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		indegree[v]++;
	}

	vector<int>ans;
	while(ans.size()<n){
		int cur = 0;
		for(int i = 1;i<=n;i++){
			if(vis[i]==0 && indegree[i]==0){
				cur = i;
				break;
			}
		}
		if (cur == 0) {
            cout << "Cycle detected or graph is not a DAG" << endl;
            return 0;
        }
		vis[cur]=true;
		ans.push_back(cur);
		for(auto x:g[cur]){
			indegree[x]--;
		}
	}
	for (auto x : ans) {
        cout << x << endl;
    }

}