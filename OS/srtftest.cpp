#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	int at[n]; //arival time
	int bt[n]; //burst time
	int rt[n]; //remaining time
	int ct; //comletion time 
	int time = 0; //current time 
	int smallest;
	int sum_wt = 0;
	int sum_tat = 0;
	int remain = 0;

	for(int i = 0;i<n;i++){
		cin>>at[i];
		cin>>bt[i];
		rt[i]=bt[i];
	}

	cout<<"Process | "<<"Tourn Around Time |"<< " Waiting time"<<nl;
	rt[99]=9999;

	for(time = 0;remain != n;time++){
		smallest = 99;
		for(int i = 0;i<n;i++){
			if(at[i]<=time && rt[i]<rt[smallest] && rt[i]>0){
				smallest = i;
			}
		}

		rt[smallest]--;

		if(rt[smallest]==0){
			remain++;
			ct = time + 1;
			cout<<"p"<<smallest+1<<" "<<ct-at[smallest]<<" "<<ct-bt[smallest]-at[smallest]<<nl;
			sum_wt += ct - bt[smallest] - at[smallest];
            sum_tat += ct - at[smallest];
		}
	}
}