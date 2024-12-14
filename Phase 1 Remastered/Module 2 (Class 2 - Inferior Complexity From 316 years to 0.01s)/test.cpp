#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;  // Read the number of cookies for Takahashi (a) and Aoki (b), and the number of actions (k)

    while (k--) {  // Loop through each action (perform exactly k actions)
        if (a > 0) {
            a--;  // If Takahashi has cookies, he eats one of his cookies
        } else if (b > 0) {
            b--;  // If Takahashi doesn't have cookies, he eats one of Aoki's cookies
        }
        // If both have no cookies, nothing happens, and we proceed to the next action
    }

    cout << a << " " << b << endl;  // Output the remaining cookies of Takahashi and Aoki
}
