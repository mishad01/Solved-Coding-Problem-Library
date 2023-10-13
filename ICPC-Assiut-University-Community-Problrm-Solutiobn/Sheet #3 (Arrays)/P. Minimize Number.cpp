#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
 
  int operations = 0;
  while (true) { 
    bool is_all_even = true; 
    for (int i = 1; i <= n; i++) {
      if (a[i] % 2 == 1) { 
        is_all_even = false;
        break;
      }
    }

    
    if (is_all_even) {
      for (int i = 1; i <= n; i++) {
        a[i] /= 2;
      }
      operations++;
    }
    else {
      break; 
    }
  }

  cout << operations << '\n';
  return 0;
}