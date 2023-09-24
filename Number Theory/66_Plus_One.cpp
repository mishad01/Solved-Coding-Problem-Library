#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& v) {
    int res = 0;
    vector<int>vec;
    for (int i = 0; i < v.size(); i++) {
        res = res * 10 + v[i];
        //res = res + 1;  
    }
    res = res+1;
    //cerr<<res;
    while (res >= 1) {
        int num = res % 10;
        cerr<<num<<endl;
        vec.push_back(num);
        res = res / 10;
    }
    reverse(vec.begin(),vec.end()); //How to reverse
    for(int i = 0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
}
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i] ;
    }
   plusOne(numbers);
    
}