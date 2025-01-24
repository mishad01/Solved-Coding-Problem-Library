#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//Approach 1
	/*int n = 12;
	int count = 0;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"Prime"<<nl;
	}else{
		cout<<"Not Prime"<<nl;
	}*/

	//Approach 2
	int num;
	cin >> num;
	int cnt = 0;
	for (int i = 1; i * i <= num; i++) {
		if (num % i == 0) {
			cnt++;
			if (i != num / i) {
				cnt++;
			}
		}
	}
	cerr << cnt;
	if (cnt == 2) {
		cout << "Prime" << nl;
	} else {
		cout << "Not Prime" << nl;
	}
	return 0;
}