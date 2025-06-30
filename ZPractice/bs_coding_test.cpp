#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    int count = 0;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0;i<n;i++){
    	cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<m;i++){
    	cin>>b[i];
    }
    for(int i = 0;i<m;i++){
    	for(int j = 0;j<n;j++){
    		int check1 = a[j]+k;
    		int check2 = a[j]-k;
    		if(b[i]<check1 && b[i]>=check2){
    			count++;
                break;
    		}
    	}
    }
    cout<<count;
}