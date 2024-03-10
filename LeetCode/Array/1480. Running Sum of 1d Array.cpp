#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int> runningSum(vector<int>& v) {
        int n = v.size();
        int sum = 0;
         vector<int>x;
        for(int i = 0;i<n;i++){
            sum = sum + v[i];
            x.push_back(sum);
        }
        return x;
    }
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    vector<vector<int>>x(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    //cout << countPairs(v, 5);
}