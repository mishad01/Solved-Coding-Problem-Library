#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
// bool repeatedSubstringPattern(string s) {

// }

int main() {
    int n = 5;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int lastNonZeroFoundat = 0;

    for (int i = 0; i < n; i++) {
        if(v[i]!=0){
            v[lastNonZeroFoundat]=v[i];
            lastNonZeroFoundat++;
        }
    }
    cerr<<lastNonZeroFoundat;
    for (int i = lastNonZeroFoundat; i < n; i++) {
        v[i]=0;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << nl;
    }
}