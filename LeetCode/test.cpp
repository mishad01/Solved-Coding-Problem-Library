#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
// bool repeatedSubstringPattern(string s) {

// }

int main() {
    int n = 3;
    int m = n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int>nums(m);
    int sum = 0;
    int x = 0;
    while(n--){
        sum = sum * 10 + v[x];
        x++;
    }
    sum+=1;
    int it = m-1;
    while(sum>0){
        int dig = sum%10;
        nums[m]=dig;
        sum /=10;
        m--;
    }
    //cout<<nums[0];
    for (int i = 0; i < m; i++) {
        cout<<nums[i];
    }

}