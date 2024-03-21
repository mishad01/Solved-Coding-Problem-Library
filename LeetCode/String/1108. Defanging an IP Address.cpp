class Solution {
public:
    string defangIPaddr(string s) {
        string tmp;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='.'){
                tmp=tmp+"[.]";
            }
            else{
                tmp = tmp+s[i];
            }
        }
        return tmp;
    }
};