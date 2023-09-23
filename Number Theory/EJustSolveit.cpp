#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int sp[N];
int main() {

	for (int i = 2; i < N; i++) {
		sp[i] = i;
	}
	for (int i = 2; i < N; i++) {
		if (sp[i] == i) { //We only take prime
			for (int j = i; j < N; j += i) {
				spf[j] = min(sp[j], i);
			}
		}
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		int gpf = 0;
		while(x>1){ //Gpf Code
			int k = sp[x];
			gpf = max(gpf,k);
			x = x/k
		}
	}
}