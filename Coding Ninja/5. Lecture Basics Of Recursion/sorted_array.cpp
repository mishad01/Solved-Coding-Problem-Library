#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
bool isSorted(int a[], int n){
	if (n==0 || n==1){
		return true;
	}
	if(a[0]<a[1] && isSorted(a+1,n-1)){
		return true;
	}
	return false;
}
// bool isSorted(int a[], int n) {
//     if (n == 0 || n == 1) {
//         return true; // An array with 0 or 1 element is sorted by definition
//     }
//     if (a[0] < a[1] && isSorted(a + 1, n - 1)) {
//         return true; // The current element is less than the next, and the rest of the array is sorted
//     }
//     return false; // The array is not sorted
// }
int main() {
 int a[6]={1,2,3,4,5,6};   
 int n= sizeof(a)/sizeof(int);
 cout<<isSorted(a,n);
}