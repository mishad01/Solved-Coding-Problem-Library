class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        string temp;
        for(int i = 0;i<n;i++){
            if(i%2!=0){
                char shifted_char = s[i - 1] + (s[i] - '0');
                temp += shifted_char;
            }else{
                temp+=s[i];
            }
        }
        return temp;
    }
};