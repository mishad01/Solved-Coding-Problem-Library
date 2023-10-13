#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	int q;
	cin >> q;
	while (q--) {
		string a, b; cin >> a >> b;
		string c = "";
		int maxLength = max(a.size(), b.size());
		for (int i = 0; i < maxLength; i++) {
			if(i<a.size()){
				c=c+a[i];
			}
			if(i<b.size()){
				c=c+b[i];
			}
		}
		cout << c << nl;
	}
}