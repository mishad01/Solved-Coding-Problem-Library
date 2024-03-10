#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int countPairs(vector<int>& v, int tar) {
    int n = v.size();
    int count = 0;

    for (int j = 0; j < n; j++) {
        if (0 <= j && (v[0] + v[j]) < tar) {
            count++;
        }
    }

    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    vector<vector<int>>x(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << countPairs(v, 5);
}