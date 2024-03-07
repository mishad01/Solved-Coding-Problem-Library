#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int maxWidthOfVerticalArea(vector<vector<int>>& v) {
    int n = v.size();
    set<int>s;
    for (int i = 0; i < n; i++) {
        s.insert(v[i][0]);
    }
    int maxx = 0;
    int prev = *s.begin();
    cerr<<prev;
    for(auto it = next(s.begin()); it != s.end();it++){
        int current = *it;
        maxx = max(maxx,abs(current-prev));
        prev = current;
    }
    return maxx;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            int num;
            cin >> num;
            v[i].push_back(num);
        }
    }

    cout<<maxWidthOfVerticalArea(v);
}
