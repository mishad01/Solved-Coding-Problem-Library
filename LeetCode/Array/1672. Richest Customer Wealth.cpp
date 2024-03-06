#include <iostream>
#include <vector>

using namespace std;
int maximumWealth(vector<vector<int>>& v) {
    int n = v.size();
    set<int>s;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < v[i].size(); j++) {
            sum = sum + v[i][j];
        }
        s.insert(sum);
    }
    int max_wealth = *s.rbegin();
    return max_wealth;
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    vector<vector<int>> v(n); // Initializing vector of vectors with n rows

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 3; ++j) { // Assuming each row has 3 elements
            int num;
            cin >> num;
            v[i].push_back(num); // Pushing elements into the current row
        }
    }

    // Printing the vector of vectors
    cout << "The vector is:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
