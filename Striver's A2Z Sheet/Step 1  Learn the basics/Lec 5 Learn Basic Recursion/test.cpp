#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void sum(int &n){
	cout<<n<<nl;
	n+=5;
	cout<<n<<nl;
	n+=5;
	cout<<n<<nl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    sum(n);
    cout<<n;
    return 0;
}