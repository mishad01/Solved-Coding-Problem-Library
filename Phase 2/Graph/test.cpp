#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 1;
vector<int>g[N];
int dis[N];
bool vis[N];
int par[N];
//We use bfs to find the shortest path
void bfs(int u){
    queue<int>q;
    q.push(u);
    vis[u]=true;
    dis[u]=0;
    while(!q.empty()){
        int fv = q.front();
        q.pop();
        cout<<fv<<" ";
        for(auto x : g[fv]){
            if(!vis[x]){
                q.push(x);
                par[x]=fv; //From which parent it came
                dis[x]=dis[fv]+1;
                vis[x]=true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    cout<<"Size: "<<g.soz
    //Bfs Distance
    // for(int i = 1;i<=n;i++){
    //  cout<<dis[i]<< " ";
    // }

    // int v = 9;
    // while(v!=1){
    //     cout<<v<<" ";
    //     v = par[v];
    // }
    // cout<<1<<nl;
}