class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int n = v.size();
        set<int>s;
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int j = 0;j<v[i].size();j++){
                sum = sum +v[i][j];
            }
            s.insert(sum);
        }
        int max_wealth = *s.rbegin(); 
        return max_wealth;
    }
};