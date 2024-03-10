#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
vector<int> runningSum(vector<int>& v) {
        int n = v.size();
         vector<int>x;
        for(int i = 0;i<n;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(j!=i){
                    if(v[i]>v[j]){
                        count++;
                    }
                }
            }
            x.push_back(count);
        }
        return x;
    }
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> result = runningSum(v);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}