class Solution {
public:
    string interpret(string s) {
        string temp;
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i]=='G'){
                temp+=s[i];
            }else if(s[i]=='('&&s[i+1]==')'){
                temp+="o";
            }
            else if(s[i]=='a' && s[i+1]=='l'){
                temp+="al";
            }
        }
        return temp;
    }
};