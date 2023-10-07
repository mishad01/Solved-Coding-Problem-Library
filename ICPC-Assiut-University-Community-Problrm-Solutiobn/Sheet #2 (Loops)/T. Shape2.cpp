#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
  int row_count; cin >> row_count;
  for (int row = 1; row <= row_count; row++) {
    int count_of_stars = 2 * row - 1;
    int count_of_spaces = row_count - row;

    for (int i = 1; i <= count_of_spaces; i++) {
      cout << " ";
    }
    for (int i = 1; i <= count_of_stars; i++) {
      cout << "*";
    }

    cout << '\n';
  }
}