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
/*int maxWidthOfVerticalArea(vector<vector<int>>& v) {
    int n = v.size(); // Get the size of the input vector v
    set<int> s; // Declare a set to store unique x-coordinates

    // Iterate through each point in the input vector v
    for (int i = 0; i < n; i++) {
        // Insert the x-coordinate (the first element of each vector) into the set s
        s.insert(v[i][0]);
    }

    int maxx = 0; // Initialize the maximum width to 0
    int prev = *s.begin(); // Get the first x-coordinate in the set as the initial previous value
    cerr << prev; // Print the initial previous value (optional, for debugging)
    // Iterate through the x-coordinates in the set s
    for (auto it = next(s.begin()); it != s.end(); it++) {
        int current = *it; // Get the current x-coordinate
        // Update the maximum width by taking the maximum of the current maximum width and the absolute difference between the current and previous x-coordinates
        maxx = max(maxx, abs(current - prev));
        prev = current; // Update the previous x-coordinate for the next iteration
    }
    return maxx; // Return the maximum width of vertical areas
}


Another way 
int maxWidthOfVerticalArea(vector<vector<int>>& v) {
    int n = v.size();
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(v[i][0]);
    }
    int maxx = 0;
    auto it = s.begin();
    int prev = *it;
    for (++it; it != s.end(); it++) {
        int current = *it;
        maxx = max(maxx, abs(current - prev));
        prev = current;
    }
    return maxx;
}
*/

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
