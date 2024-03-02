#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        int n = operations.size();
        for(int i = 0;i<n;i++){
            if(operations[i]=="++X" ||operations[i]=="X++" ){
                count++;
            }
            else{
                count--;
            }
        }
        return count;
    }
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    cout<<finalValueAfterOperations(v);
}