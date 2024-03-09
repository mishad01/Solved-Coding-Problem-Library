#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int numberOfEmployeesWhoMetTarget(vector<int>& v, int target) {
	int n = v.size();
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] >= target) {
			count++;
		}
	}
	return count;
}

int main() {

}