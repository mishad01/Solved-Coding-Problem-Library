#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<pair<int,int>,int>mp3;

    mp3[{1,2}]=100;
    mp3[{3,4}]=200;
    mp3.insert({{5,6},300});

    

    cout << "Map mp3 elements:" << nl;
    for (auto it : mp3) {
        cout << "(" << it.first.first << ", " << it.first.second << ") -> " << it.second << nl;
    }


    

    return 0;
}