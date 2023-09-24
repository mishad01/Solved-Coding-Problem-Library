#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& v) {
    int ind = v.size()-1;
    for(int i = ind;i>=0;i--){
        if(v[i]==9){
            v[i]=0; 
        }
        else{
            v[i]=v[i]+1;
            return v; //IF 19 = then 9 will be 0 and for else condition it will be +1 so it will be 2
        }
    }
    v.insert(v.begin(),1); //If everything is 999 after if condition everything will be 0 and at the begin 1 will be added
    return v;
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