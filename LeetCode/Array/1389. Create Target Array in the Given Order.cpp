class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int>v;
        for(int i = 0;i<n;i++){
            v.insert(v.begin()+index[i],nums[i]);
            
        }
        return v;
    }
};
nums = [1, 2, 3, 4, 5]
index = [0, 1, 2, 2, 1]
Iteration 1 (i = 0):

index[0] is 0.
v.begin() + index[0] points to the beginning of the vector.
nums[0] is 1.
So, it inserts 1 at the beginning of the vector.
After this iteration, v becomes [1].
Iteration 2 (i = 1):

index[1] is 1.
v.begin() + index[1] points to the second position of the vector.
nums[1] is 2.
So, it inserts 2 at the second position of the vector.
After this iteration, v becomes [1, 2].
Iteration 3 (i = 2):

index[2] is 2.
v.begin() + index[2] points to the third position of the vector.
nums[2] is 3.
So, it inserts 3 at the third position of the vector.
After this iteration, v becomes [1, 2, 3].
Iteration 4 (i = 3):

index[3] is 2.
v.begin() + index[3] still points to the third position of the vector.
nums[3] is 4.
So, it inserts 4 at the third position of the vector, pushing the existing element at this position to the right.
After this iteration, v becomes [1, 2, 4, 3].
Iteration 5 (i = 4):

index[4] is 1.
v.begin() + index[4] points to the second position of the vector.
nums[4] is 5.
So, it inserts 5 at the second position of the vector, pushing the existing element at this position to the right.
After this iteration, v becomes [1, 5, 2, 4, 3].