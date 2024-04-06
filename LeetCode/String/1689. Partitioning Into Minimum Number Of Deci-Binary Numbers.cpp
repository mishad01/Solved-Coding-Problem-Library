class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(char x : n){
            //ascii value
            int curr = x - '0';
            ans = max(ans,curr); 
        }
        return ans;
    }
};