#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    int x = a.size();
    int count = 0;
    int countb = 0;
    for (int i = 0; i < x; i++) {
        if (islower(a[i])) {
            count++;
        }
        if (isupper(a[i])) {
            countb++;
        }
    }

    if (islower(a[0]) && countb == x - 1) {
        a[0] = toupper(a[0]);
        for (int i = 1; i < x; i++) {
            a[i] = tolower(a[i]);
        }
    }
    cerr<<countb<< " "<<x;
    if(countb==x){
        for (int i = 0; i < x; i++) {
            a[i] = tolower(a[i]);
        }
    }
     
    cout << a;

}