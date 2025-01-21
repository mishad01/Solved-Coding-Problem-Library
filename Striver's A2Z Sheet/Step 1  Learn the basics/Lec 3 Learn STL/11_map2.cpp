#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<int,pair<int,int>>mp2;

    mp2[1]={10,20};
    mp2[2]={30,40};
    mp2.insert({3,{50,60}});

    

    // Display map elements
    cout << "Map mp elements:" << nl;
    for (auto it : mp2) {
        cout << it.first << " -> " << it.second.first <<" "<<it.second.first << nl;
    }

    

    return 0;
}