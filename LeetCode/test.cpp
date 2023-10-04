#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int gcd(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a < b) swap(a, b);
	return gcd(a % b, b);
}
int findGCD(vector<int>& nums) {
	int n = nums.size();
	int minn = nums[0];
	int maxx = 0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		minn=min(minn,nums[i]);
		maxx = max(maxx, nums[i]);
	}
	cerr<<minn<<" "<<maxx;
	res = gcd(minn, maxx);
	return res;
}
int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout<<findGCD(a);
}
