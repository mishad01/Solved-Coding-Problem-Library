class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum(n);
        leftsum[0]=0;
        for(int i = 1;i<n;i++){
            leftsum[i]=leftsum[i-1]+nums[i-1];
        }
        vector<int>rightsum(n);
        for(int i = n-2;i>=0;i--){
            rightsum[i]=rightsum[i+1]+nums[i+1];
        }
        vector<int>ans(n);
        for(int i = 0;i<n;i++){
            ans[i]=abs(leftsum[i] - rightsum[i]);
        }
        return ans;
    }
};