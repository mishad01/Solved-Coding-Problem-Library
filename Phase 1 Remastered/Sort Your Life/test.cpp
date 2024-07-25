#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    for (auto x : nums) {
        cerr<<__builtin_popcount(x)<<nl;
        if (__builtin_popcount(x) == k) {
            sum += x;
        }
    }
    return sum;
}
int main() {
    vector<int>v = {4,3,2,1};
    cout<<sumIndicesWithKSetBits(v,2);
}

/*
000 0
001 1
010 2
011 3
100 4
101 5
110 6 
111 7*/