class Solution {
public:
    int titleToNumber(string ct) {
        int ans = 0;
        for(auto x : ct){
            int temp = x - 'A'+1;
            ans = ans * 26 + temp;
        }
        return ans;
    }
};