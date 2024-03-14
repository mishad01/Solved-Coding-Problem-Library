#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    string s;
    getline(cin, s); // Input the instructions as a string

    int x = 0, y = 0; // Initial position of the robot
    int d = 0; // Direction of the robot: 0 = North, 1 = East, 2 = South, 3 = West

    // Loop through each instruction
    for (int i = 0; i < s.size(); i++) {
        char ch = s[i]; // Get the current instruction character

        // Update direction based on the instruction
        if (ch == 'L') {
            d--; // Turn left
            if (d < 0) {
                d += 4; // Ensure the direction remains within 0 to 3
            }
        } else if (ch == 'R') {
            d++; // Turn right
            d %= 4; // Ensure the direction remains within 0 to 3
        } else {
            // Move forward based on the current direction
            if (d == 0) {
                y++; // Move north
            } else if (d == 1) {
                x++; // Move east
            } else if (d == 2) {
                y--; // Move south
            } else if (d == 3) {
                x--; // Move west
            }
        }
    }
    return (x == 0 && y == 0) || d != 0;
}
