#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void printusingspace(ll n){
	if(n<10){
		cout<<n<<" ";
		return;
	}
	printusingspace(n/10);
	cout<<(n%10)<<" ";


}
int main() {
    ll n;
    cin>>n;
    while(n--){
    	ll x;
    	cin>>x;
    	printusingspace(x);
    	cout<<endl;
    }
}