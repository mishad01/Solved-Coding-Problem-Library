#include <iostream>
#include <string>

using namespace std;

int count_operations(int n, int m, string x, string y) {
    int ans = 0;

    while (x != y) {
        if (x.find(y) != string::npos) {
            return ans + 1;
        }

        x += x;
        ans++;

        if (x.size() > n * m) {
            return -1;
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int result = count_operations(n, m, a, b);
        cout << result << endl;
    }

    return 0;
}
