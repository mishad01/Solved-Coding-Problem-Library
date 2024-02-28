#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int numIdenticalPairs(vector<int>& nums) {
    int n = nums.size();
    int count=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i<j && nums[i]==nums[j]){
                count++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        //cout << v[i] << nl;
    }
    cout<<numIdenticalPairs(v);
}