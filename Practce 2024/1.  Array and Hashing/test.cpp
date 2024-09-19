#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int dominantIndex(vector<int>& nums) {
    int maxv = 0;
    for (auto x : nums) {
        maxv = max(maxv, x);
    }
    auto it = find(nums.begin(), nums.end(), maxv);
    int maxIndex = distance(nums.begin(), it);
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] * 2 > maxv && nums[i] != maxv) {
            return -1;
        }
    }
    return maxIndex;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << dominantIndex(v);
}