#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int m,n;
    cin>>m>>n;
    int **p = new int*[m];
    for(int i = 0;i<m;i++){
        p[i]=new int [n];
        for(int j = 0;j<n;j++){
            cin>>p[i][j];
        }
    }

}