#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
//Pushes the maximum to the last
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[] = {1, 7, 9, 3, 5, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (auto x : a) {
        cout << x << " ";
    }
    return 0;
}