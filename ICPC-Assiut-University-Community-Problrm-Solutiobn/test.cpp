#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	int n; cin >> n;
	int a[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			count++;
			swap(a[i],a[i+1]);
		}
	}
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	//cout<<count;
}