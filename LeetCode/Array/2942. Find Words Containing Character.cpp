#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int> findWordsContaining(vector<string>& v, char s) {
    vector<int>x;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == s) {
                x.push_back(i);
                break;
            }
        }
    }
    return x;
}
int main() {
    int n;
    cin >> n;
    vector<string>v(n);
    vector<vector<int>>x(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        cout << v[i] << nl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == 'e') {
                x[i].push_back(i);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Indices of 'e' in word " << i << ": ";
        for (int j = 0; j < x[i].size(); j++) {
            cout << x[i][j] << " ";
        }
        cout << nl;
    }
}