#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int num = 0;
    for (int i = 0; i <= nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (i != nums[j]) {
                num = i;
            }
        }
    }
    return num;
}
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i] ;
    }
    cout << missingNumber(numbers);

}