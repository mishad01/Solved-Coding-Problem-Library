#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans(n*2);
    for(int i = 0;i<n;i++){
        ans[i] = nums[i];
        ans[i + n] = nums[i]; // Correct index calculation
        //cout << ans[i] << endl; 
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        //cout << v[i] << nl;
    }
    getConcatenation(v);
}