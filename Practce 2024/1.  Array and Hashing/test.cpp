//E->E+T/T
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    char check = s[0];

    string alpha = "";
    string beta = "";

    size_t found1 = s.find("->");
    size_t found2 = s.find("|");

    if (found2) {
        beta = s.substr(found2 + 1);
        s = s.substr(0, found2);
    }
    if (found1) {
        s.erase(found1, 2);
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != check) {
            alpha += s[i];
        }
    }
    cout << "ALPHA = " << alpha << endl;
    cout << "BETA = " << beta << endl;
    cout << check << "->" << beta << check << "'" << endl;
    cout << check << "'->" << alpha << check << "'| e" << endl;


    return 0;

}