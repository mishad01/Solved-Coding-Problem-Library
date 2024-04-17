class Solution {
public:
Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = nums.size()-1; i>=2; i--){
            if(nums[i-1]+nums[i-2] > nums[i])
                return nums[i-1]+nums[i-2] + nums[i];
        }
        return 0;
    }
};