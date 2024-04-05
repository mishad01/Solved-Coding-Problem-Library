class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        int m = t.size();
        int count = 0;
        map<char,int>mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto x : mp){
            if(x.second>0){
                count+=x.second;
            }
        }

        return count;
    }
};