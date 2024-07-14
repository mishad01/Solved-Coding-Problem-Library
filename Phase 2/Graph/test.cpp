class Solution {
public:
static bool compare(const pair<int, string>& a, const pair<int, string>& b) {
        return b.first < a.first; 
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>>hnp;

        for(int i = 0;i<n;i++){
            hnp.push_back({heights[i],names[i]});
        }

        sort(hnp.begin(),hnp.end(),compare);
        vector<string>sorted_name;
        for(auto x : hnp){
            sorted_name.push_back(x.second);
        }
        return sorted_name;
    }
};