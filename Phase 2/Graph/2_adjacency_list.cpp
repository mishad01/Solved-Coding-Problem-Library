#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
vector<int> g[N];
int indegree[N], outdegree[N];
bool vis[N];
int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
    	int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // for(auto x : g[2]){
    //     cout<<x<<" "; 
    // }

    //Degree
    for(int i = 1;i<=n;i++){
        cout<<i<<" "<<g[i].size()<<endl;
    }

}