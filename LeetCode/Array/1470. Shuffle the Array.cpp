#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int> shuffle(vector<int>& nums, int n) {
    // vector<int>v;
     vector<int>z(nums.size());
     int count = 0;
    // for(int i = 0;i<n;i++){
    //     v.push_back(nums[i+n]);
    // }
    for(int i = 0;i<n;i++){
        z[count]=nums[i];
        z[1+count]=nums[i+n];
        count+=2;
    }
    return z;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        //cout<<v[i];
    }
    vector<int> result = shuffle(v, 3); // Store the result of shuffle function
    for (int num : result) { // Iterate over the result vector and output each element
        cout << num << " ";
    }
}