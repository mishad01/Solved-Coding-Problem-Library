#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5+9;
bool f[N];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	f[1] = true;
	vector<int>v;
	for(int i = 2;i<=n;i++){
		if(f[i]==false){
			v.push_back(i);
			for(int j = i+i;j<=n;j=j+i){
				cerr<<j<<endl;
				f[j]=true;
			}
		}
	}
	for(auto x: v){
		cout<<x<<" ";
	}
}
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2

        vector<bool> is_prime(n, true); // Create a boolean array of size n
        is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

        for (int i = 2; i * i < n; ++i) {
            if (is_prime[i]) {
                for (int j = i * i; j < n; j += i) {
                    is_prime[j] = false; // Mark all multiples of i as not prime
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (is_prime[i]) count++; // Count the number of primes
        }

        return count;
    }
};
