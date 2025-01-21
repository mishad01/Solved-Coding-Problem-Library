#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<"Array Sort : "<<nl;
    int a[] = {1, 34, 7, 3, 45, 67, 23}; // Correct initialization
    sort(a,a+7);
    for(int i = 0;i<7;i++){
    	cout<<a[i]<<" ";
    }
    cout<<nl;
    cout<<"Vector Sort : "<<nl;
    vector<int>v = {1, 34, 7, 3, 45, 67, 23};
    for(int i = 0;i<7;i++){
    	cout<<v[i]<<" ";
    }

    cout<<nl;
    cout<<"Descending  Sort : "<<nl;
    // Sorting in descending order
    int b[] = {1, 34, 7, 3, 45, 67, 23};
    sort(b,b+7,greater<int>());
    for(int i = 0;i<7;i++){
    	cout<<b[i]<<" ";
    }

    sort(b,b+7,greater<int>());

    return 0;
}