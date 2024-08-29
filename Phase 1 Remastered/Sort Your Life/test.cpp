#include <iostream>
using namespace std;

void subArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for(int k = i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout << "\n";
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    subArray(arr, n);
    cout<<"test"<<endl;

    return 0;
}
