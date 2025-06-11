#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>>matrix;
    int n = 1;
    for(int i = 0;i<3;i++){
      vector<int>num;
      for(int j = 0;j<4;j++){
        num.push_back(n);
        n++;
      }
      matrix.push_back(num);
    }

    for(int i = 0;i<3;i++){
      for(int j = 0;j<matrix[0].size();j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    cerr<<matrix.size();
    return 0;
}