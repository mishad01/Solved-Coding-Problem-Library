class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a;
        string b;
        for(auto str : word1){
            a+=str;
        }
        for(auto str : word2){
            b+=str;
        }
        if(a!=b){
            return false;
        }
        return true;
        
    }
};