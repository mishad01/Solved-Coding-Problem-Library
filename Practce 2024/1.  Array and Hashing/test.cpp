#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to return the name of the candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        map<string, int> mp;

        // Counting the votes for each candidate.
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        int maxVotes = 0;
        string candidate = "";

        // Finding the candidate with the maximum votes.
        for (auto x : mp) {
            if (x.second > maxVotes) {
                maxVotes = x.second;
                candidate = x.first;
            } else if (x.second == maxVotes) {
                if (x.first < candidate) {
                    candidate = x.first;
                }
            }
        }

        // Preparing the result.
        vector<string> result;
        result.push_back(candidate);
        result.push_back(to_string(maxVotes));
        return result;
    }
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        Solution obj;
        vector<string> result = obj.winner(arr, n);
        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}
