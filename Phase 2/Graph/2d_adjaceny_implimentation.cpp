#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void print(vector<vector<int>>v,int sv){
    cout<<sv<<endl;
    int n = v.size();
    for(int i = 0;i<n;i++){
        if(v[sv][i]){
            print(v,i);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<vector<int>>matrix(n, vector<int>(n, 0));
    while(e--){
        int fv,sv;
        cin>>fv>>sv;
        matrix[fv][sv]=1;
        matrix[sv][fv]=1;
    }
    vector<bool>visi
    print(matrix,0);

}

/*
    Suppose n = 3. The line of code:

    cpp
    Copy code
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    will create a 3x3 matrix (a 2D vector) like this:

    csharp
    Copy code
    matrix = [
    [0, 0, 0],
    [0, 0, 0],
    [0, 0, 0]
    ];

*/