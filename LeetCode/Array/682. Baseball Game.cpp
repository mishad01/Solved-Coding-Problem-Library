#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int calPoints(vector<string>& s) {
    vector<int> scores;
    for (const string& op : s) {
        if (op == "+") {
            scores.push_back(scores.back() + scores[scores.size() - 2]);
        } else if (op == "D") {
            scores.push_back(2 * scores.back());
        } else if (op == "C") {
            scores.pop_back();
        } else {
            scores.push_back(stoi(op));
        }
    }

    int sum = 0;
    for (int score : scores) {
        sum += score;
    }

    return sum;
}
int main() {
    int n;
    cin >> n;
    vector<string>v(n);
    vector<vector<int>>x(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

}