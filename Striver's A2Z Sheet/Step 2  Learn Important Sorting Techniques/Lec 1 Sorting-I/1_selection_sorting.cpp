#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
//Get Minimum and swap it 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[] = {1, 7, 9, 3, 5, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0;i<n;i++){
    	int minIdx = i;
    	for(int j = i+1;j<n;j++){
    		if(a[j]<a[minIdx]){
    			minIdx = j;
    		}
    	}
    	swap(a[i],a[minIdx]);
    }

    for(auto x : a){
    	cout<<x<<" ";
    }
    return 0;
}