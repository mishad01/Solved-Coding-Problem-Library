class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string temp(s.size(), ' ');
        for(int i = 0;i<n;i++){
            temp[indices[i]]=s[i];
        }
        return temp;
    }
};