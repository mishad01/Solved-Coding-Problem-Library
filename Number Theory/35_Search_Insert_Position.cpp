#include<bits/stdc++.h>
using namespace std;
nt searchInsert(vector<int>& nums, int target) {
        int index = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                index = i;
                break;
            }
            else{
                if (target<nums[i]){
                index = i;
                break;
            }
            else if (nums[i]<target) {
            index = i + 1;
        }
        }
    }
    return index;
}
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i] ;
    }
    // for (int i = 0; i < numbers.size(); ++i) {
    //     cout << numbers[i] << " ";
    // }
    int target;
    cin >> target;
    cout << searchInsert(numbers, target);

}