#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
bool f[N];
vector<int>primes;
void seive() {
    f[1] = true;
    for (int i = 2; i < N; i++) {
        f[i] = true;
    }
    for (int i = 2; i < N; i++) {
        if (f[i]) {
            for (int j = i + i; j < N; j += i) {
                f[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (f[i]) {
            primes.push_back(i);
        }
    }

}
int main() {
    int q;
    cin >> q;
    int cs = 0;
    seive();
    while (q--) {
        ll n; cin >> n;
        ll num_of_div = 1;
        for (auto x : primes) {
            if (1ll * x * x > n)break;
            int num_of_pow = 0;
            while (n % x == 0) {
                num_of_pow++;
                n /= x;
            }
            num_of_div *= num_of_pow + 1;
        }
        if (n > 1) {
            int power_of_p = 1;
            num_of_div *= (power_of_p + 1);
        }
        cout << "Case " << ++cs << ": " << num_of_div - 1 << '\n';
    }
}