#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>&v, int target) {
    int l = 0;
    int r = v.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if(v[mid]==target) return true;

        if(v[mid]>target){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return false;
}
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};
    int target = 11;
    cout<<binarySearch(v,target);

}