#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int maxProfit(vector<int>& prices) {
	int n = prices.size();
	int maximum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int res = prices[j] - prices[i];;
			if (prices[i] < prices[j]) {
				maximum = max(maximum, (prices[j] - prices[i]));

			}
			cerr << res << nl;
		}
	}
	return maximum;
}
int main() {
	vector<int>v = {7, 1, 5, 3, 6, 4};
	cout << maxProfit(v);

}