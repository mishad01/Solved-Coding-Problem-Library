class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s(allowed.begin(),allowed.end());
        int count = 0;
        for(auto y : words){
            bool check = true;
            for(auto x : y ){
                //checks if not found
                if(s.find(x)==s.end()){
                    check = false;
                    break;
                }
            }
            if(check == true){
                count++;
            }
        }
        return count;
    }
};