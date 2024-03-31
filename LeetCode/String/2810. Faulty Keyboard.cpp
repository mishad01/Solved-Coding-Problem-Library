class Solution {
public:
    string finalString(string s) {
        string temp;
        string rev;
        for (auto x : s){
            if(x =='i'){
                reverse(temp.begin(),temp.end());
                //temp+=temp;
            }
            else{
                temp+=x;
            }
        }
        return temp;
    }
};