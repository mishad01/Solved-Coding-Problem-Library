class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        vector<int>res;
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            vis[v]=true;
        }
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                res.push_back(i);
            }
        }
        return res;
    }
};