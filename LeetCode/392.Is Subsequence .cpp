#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isSubsequence(string s, string t) {
	int j = 0;
	bool c = 0;
	if (s == "") {
		return true;
	}
	else {
		for (int i = 0; i < t.size(); i++) {
			cerr << t[i] << " " << s[j] << endl;
			if (t[i] == s[j]) {
				j++;
			}
			if (j == s.size()) {
				c = 1;
				break;
			}
		}
	}
	return c;
}
int main() {
	string s;
	string t;
	cin >> s >> t;
	//cerr << s.size();
	cout << isSubsequence(s, t);

}

/*Debug of loop:
a a
h c
b c
g c
d c
c c*/