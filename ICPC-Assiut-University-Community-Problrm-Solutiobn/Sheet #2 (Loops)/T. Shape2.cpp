#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int row_count; cin >> row_count;
  for (int row = 1; row <= row_count; row++) {
    // there will be "2 * row - 1" number of * in the "row"th row
    // for example, 1 * in the 1st row
    // 3 * in the 2nd row, 5 * in the 3rd row and 7 * in the 4th row
    int count_of_stars = 2 * row - 1;

    // before the stars there will be "row_count - row" number of spaces in the "row"th row
    // for example, if row_count = 4, then 3 spaces in the 1st row
    // 2 spaces in the 2nd row, 1 space in the 3rd row and 0 space in the 4th row
    int count_of_spaces = row_count - row;

    for (int i = 1; i <= count_of_spaces; i++) {
      cout << " ";
    }
    for (int i = 1; i <= count_of_stars; i++) {
      cout << "*";
    }
    // you can use the same variable names in loops if they are not nested
    cout << '\n';
  }
}