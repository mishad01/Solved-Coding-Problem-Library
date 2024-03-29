class Solution {
public:
    int balancedStringSplit(string s) {
        int n= s.size();
        int r = 0;
        int l = 0;
        int counter = 0;
        for (int i = 0;i<n;i++){
            if(s[i]=='R'){
                r+=1;
            }else if(s[i]=='L'){
                l+=1;
            }
            if(l==r){
                counter++;
            }
        }
        return counter;
    }
};