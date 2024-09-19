#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	/*------For a*b+--------*/
	string s;
	cin >> s;
	int n = s.size();
	int state = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'b') {
			state = 2;
		} if (s[i] == 'a') {
			state = 1;
		}
	}
	cerr<<state;
	if (state == 2) {
		cout << "a*b+ : Accepted " << endl;
	} else {
		cout << "a*b+ : Not Accepted " << endl;
	}
}