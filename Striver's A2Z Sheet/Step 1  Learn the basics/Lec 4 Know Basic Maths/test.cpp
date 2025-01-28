#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string S, T, R;
    cin >> S >> T>> R;
   
    unordered_map<char, int> pentagon = {
        {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}
    };

    
    int s1 = pentagon[S[0]], s2 = pentagon[S[1]];
    int t1 = pentagon[T[0]], t2 = pentagon[T[1]];


    int distS = min(abs(s1 - s2), 5 - abs(s1 - s2));
    int distT = min(abs(t1 - t2), 5 - abs(t1 - t2));

    if (distS == distT) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
