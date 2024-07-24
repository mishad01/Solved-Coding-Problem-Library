#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
set<int>se[1010];
int mask[1010];
int main() {
	int n;
	cin>>n;
	se[0]=set<int>({1,2,3,6});
	se[1]=set<int>({1,3,5});
	for(int i = 0;i<n;i++){
		mask[i];
		for(auto x : se[i]){
			mask[i]=mask[i] | (1<<x);
		}
	}

}