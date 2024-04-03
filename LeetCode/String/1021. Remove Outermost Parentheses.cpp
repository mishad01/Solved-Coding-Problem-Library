class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string temp;
        stack<char>st;
        for(auto x : s){
            if(x=='('){
                if(st.size()>0){
                    temp.push_back(x);
                }
                st.push(x);
            }
            else{
                st.pop();
                if(!st.empty()){
                    temp.push_back(x);
                }
            }
        }
        return temp;
    }
};