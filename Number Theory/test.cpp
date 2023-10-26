#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    int q;
    cin >> q;
    map<char, int>mp;
    int maxfreq = 0;
    char maxchar;
    if (q == 1) {
        string x;
        cin >> x;
        cout << x;
        //break;
    }
    else {
        while (q--) {
            string a;
            cin >> a;
            for (int i = 0; i < a.size(); i++)
            {
                mp[a[i]]++;
                if (mp[a[i]] > maxfreq) {
                    maxfreq = mp[a[i]];
                    maxchar = a[i];
                }
            }
        }
        cout << maxchar;
    }
    //cout << maxchar;
}
