class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i;
        int count =1;
        for(int i = 0;i<n;i++){
            if(nums[count-1]!=nums[i]){
                nums[count]=nums[i];
                count++;
            }
        }
        return count;
    }
};