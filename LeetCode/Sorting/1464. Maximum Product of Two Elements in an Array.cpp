class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxx = INT_MIN;
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                ans = (nums[i]-1)*(nums[j]-1);
                maxx = max(maxx,ans);
            }
        }
        return maxx;
    }
};