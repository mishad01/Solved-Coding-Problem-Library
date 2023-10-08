#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e6 + 9;
int f[N];

int main() {
    for (int i = 2; i < N; i++) {
        f[i] = i;
    }
    for (int i = 2; i < N; i++) {
        for (int j = i + i; j < N; j += i) {
            f[j] = min(f[j], i);
        }
    }
    
    int n;
    while (cin >> n && n != 0) {
        int save = n;
        int count = 0;
        while (n > 1) {
            int p = f[n];
            count++;
            while (n % p == 0) {
                cerr<<n<<endl;
                n = n / p;
            }
        }
        cout <<save<<" : " <<count << nl;  
    }

    return 0;
}
