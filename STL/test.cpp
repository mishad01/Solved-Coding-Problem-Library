#include<bits/stdc++.h>
using namespace std;
int main() {
	// string x;
	// cin>>x;
	int n;
	cin>>n;
	// int a[n];
	// for(int i = 0;i<n;i++){
	// 	cin>>a[i];
	// }
	for(int i = n;i>=0;i--){
		for(int j = 1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}


}