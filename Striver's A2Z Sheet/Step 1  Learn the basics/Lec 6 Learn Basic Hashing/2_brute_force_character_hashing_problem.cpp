#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<bool> visited(s.size(), false);

    for (int n i = 0; i < s.size(); i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int n j = i + 1; j < s.size(); j++) {
            if (s[j] == s[i]) {
                count++;
                visited[j] = true;
            }
        }
        cout << s[i] << " " << count << nl;
    }

    return 0;
}
