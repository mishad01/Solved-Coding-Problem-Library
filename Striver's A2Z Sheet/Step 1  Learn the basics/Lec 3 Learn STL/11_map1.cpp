#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<int,int>mp;

    map<int,pair<int,int>>mp2;
    map<pair<int,int>,int>mp3;

    mp.insert({1,100});
    mp.insert({1,100});
    mp.insert({1,100});
    
    mp.insert({2,200});
    mp[3]=300;
    mp[4]=400;

    // Display map elements
    cout << "Map mp elements:" << nl;
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << nl;
    }

    // Accessing an element
    cout << "Value at key 2: " << mp[2] << nl;

    mp.erase(2);
    // Display map elements
    cout << "After erase Map mp elements:" << nl;
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << nl;
    }

    return 0;
}