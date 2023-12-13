#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int at[n], bt[n], rt[n];
	for (int i = 0; i < n; i++) {
		cin >> at[i];
		cin >> bt[i];
		//bt[i] = rt[i];
	}
	 rt[99] = 9999;
	int time;
	int remain = 0;
	int ct;
	int sum_wait;
	int sum_turnaround;
	int smallest;
	for (time = 0; remain != n; time++) {
		smallest = 99;
		for (int j = 0; j < n; j++) {
			if (at[j] <= time && rt[j] < rt[smallest] && rt[j] > 0) {
				smallest = j;
			}
		}
		rt[smallest]--;

		if(rt[smallest]==0){
			remain++;
			ct = time + 1; //in how unit of time a process completed checks that
			 printf("\nP[%d]\t|\t%d\t|\t%d", smallest + 1, ct - at[smallest], ct - bt[smallest] - at[smallest]);

            sum_wait += ct - bt[smallest] - at[smallest];
            sum_turnaround += ct - at[smallest];

		}
	}
}