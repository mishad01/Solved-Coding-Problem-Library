#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Number of notes in the melody
        
        vector<int> notes(n);
        for (int i = 0; i < n; ++i) {
            cin >> notes[i];  // Read the notes
        }
        
        bool isPerfect = true;
        for (int i = 1; i < n; ++i) {
            int interval = abs(notes[i] - notes[i - 1]);
            if (interval != 5 && interval != 7) {
                isPerfect = false;
                break;  // No need to check further if one interval is invalid
            }
        }
        
        cout << (isPerfect ? "YES" : "NO") << nl;
    }

    return 0;
}
