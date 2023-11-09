#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; // If any element is smaller than the previous one, the array is not sorted.
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    while (num--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool check = isSorted(a, n);

        if (check) {
            cout << 0 << endl;
        } else {
            int count = 0;
            int in = 1;
            for (int i = 0; i < n; i++) {
                a[i] = a[i] + in;
                in++;
                count++;
            }
            if (isSorted(a, n)) {
                cout << count << endl;
            } else {
                cout << "Too chaotic" << endl;
            }
        }
    }

    return 0;
}
