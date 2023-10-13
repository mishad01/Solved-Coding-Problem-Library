#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int b[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  sort(a + 1, a + n + 1);
  sort(b + 1, b + n + 1);

  for (int i = 1; i <= n; i++) {
    if (a[i] != b[i]) {
      cout << "no";
      return 0;
    }
  }
  cout << "yes";
  return 0;
}