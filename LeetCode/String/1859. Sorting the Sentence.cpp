class Solution {
public:
    string sortSentence(string s) {
        vector<string>pos(10,"");
        string temp;
        for(auto x : s){
            if(isalpha(x)){
                temp=temp+x;
            }else if(isdigit(x)){
                 pos[x-'0']=temp;
                 temp ="";
                //   int index = x - '0'; // Convert character to integer
                // pos[index] = temp;
                // temp = "";
            }
        }
        string ans;
        for(int i = 1;i<pos.size();i++){
            if (!pos[i].empty()) {
                ans += pos[i] + ' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};