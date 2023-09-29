#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	int q;
	cin >> q;
	while (q--) {
		string s;
		cin >> s;
		stack<char>st;
		int len = s.length();
		bool check = 0;

		for (int i = 0; i < len; i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
				st.push(s[i]);
			else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
				if (st.empty())
					check = false;
				else if (s[i] == ')' && st.top() != '(')
					check = false;
				else if (s[i] == '}' && st.top() != '{')
					check = false;
				else if (s[i] == ']' && st.top() != '[')
					check = false;
				else
					st.pop();
			}
		}
		if (st.empty()) {
			cout << "YES" << nl;
		}
		else {
			cout << "N0";
		}
	}

}