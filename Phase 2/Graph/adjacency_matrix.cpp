#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 105;
int g[N][N];
int main() {
    int n,m;
    cin>>n>>m;
    while(m--){
    	int u,v;
    	cin>>u>>v;
    	g[u][v]=1;
    	g[v][u]=1;
    }
    if(g[3][5]){
    	cout<<"Yes"<<nl;
    }else {
    	cout<<"No"<<nl;
    }

}