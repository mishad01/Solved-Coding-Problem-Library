#include <iostream>
#include <string>

using namespace std;

int solve(int n, string s) {
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0' ) {
            zeros++;
        } else if( s[i] == '1'){
            ones++;
        }
        if (i < n - 1 && s[i] == s[i + 1]) {
            zeros = ones = 0;
        }
    }
    return zeros + ones;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}
