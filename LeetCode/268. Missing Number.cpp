#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int sum = 0;
    int vsum = 0;
    for(int i = 1;i<=nums.size();i++){
    	sum = i+sum;
    }
    for(int i = 0;i<nums.size();i++){
    	vsum = nums[i]+vsum;
    }
    cerr<<sum<<" "<<vsum;
    return sum-vsum;
}
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i] ;
    }
    missingNumber(numbers);

}