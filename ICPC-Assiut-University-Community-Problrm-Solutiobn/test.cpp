#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
bool f[N];
int main () {
	int n;
	cin >> n;
	f[1] = true;
	vector<int>v;
	for (int i = 2; i <= n; i++) {
		if (f[i] == false) {
			v.push_back(i);
			for ( int j = i+i; j <= n; j+=i) {
				f[j] = true;
			}
		}
	}
	for (auto x : v) {
		cout << x << endl;
	}
	//cout << "Count : " << count << endl;
}