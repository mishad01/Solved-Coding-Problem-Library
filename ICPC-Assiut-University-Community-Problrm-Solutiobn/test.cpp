#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int findLucky(vector<int>& arr) {
	map<int, int>mp;
	int num = 0;
	int test =0;
	for (int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}
	// for (int i = 0; i < arr.size(); i++) {
	// 	cerr<<mp[arr[i]]<<endl;
	// }
	// for(auto x : mp){
	// 	cerr<<x.first<<" "<<x.second<<endl;
	// }
	for (int i = 0; i < arr.size(); i++) {
		if (mp[arr[i]] == arr[i]) {
			num = max(num,arr[i]);
		}
	}
	if(num>=1){
		return num;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	vector<int>a{5,4,7,8,4,8,8,3,7,7,6,3,7,6,5,6,8,4,5,7,4,7,7,5,2,5,6,6,8,1,6,8,8,8,9,3,2,9};
	// for (int i = 0; i < n; i++) {
	// 	cin >> a[i];
	// }
	cout << findLucky(a);

}