#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end()); // Sort the array
    long long sum = 0; // To store the sum of the current window
    int maxFreq = 0; // To store the maximum frequency
    int l = 0; // Left pointer of the window
    int r = 0; // Right popinter of the window

    while(r<nums.size()){
        sum+=nums[r];
        while(nums[r]*(r-l+1)>sum+k){
            sum-=nums[l];
            l++;
        }
        maxFreq = max(maxFreq,r-l+1);
        r++;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v = {1, 2, 4};
    cout << maxFrequency(v, 5);
    return 0;
}
