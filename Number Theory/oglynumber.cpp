#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  long long gc = 0;
  for (int i = 1; i <= n; i++) {
    long long x; cin >> x;
    gc = __gcd(gc, x);
  }

  int divs = 0;
  for (int i = 1; 1LL * i * i <= gc; i++) {
  	cerr<<i<<endl;
    if (gc % i == 0) {
      divs++;
      if (i != gc / i) {
        divs++;
      }
    }
  }
  cout << divs << '\n';
  return 0;
}