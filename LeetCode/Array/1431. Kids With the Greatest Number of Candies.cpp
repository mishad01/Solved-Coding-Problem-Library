#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<bool> kidsWithCandies(vector<int>& v, int e) {
    int n = v.size();
    int great = 0;
    for (int i = 0; i < n; i++) {
        great = max(great, v[i]);
    }
    vector<bool>res;
    for (int i = 0; i < n; i++) {
        if (v[i] + e >= great) {
            res.push_back(true);
        } else {
            res.push_back(false);
        }
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    vector<string>v(n);
    vector<vector<int>>x(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    kidsWithCandies(v, 3);
}