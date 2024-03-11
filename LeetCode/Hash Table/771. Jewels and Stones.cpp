#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    string s1,s2;
    cin>>s1>>s2;
    //int maxx = max(s1.size(),s2.size());
    int count = 0;
    //set<char>s;
    // for(int i = 0;i<s1.size();i++){
    //    s.insert(s1[i]);
    // }
    // for(int i = 0;i<s2.size();i++){
    //     s.insert(s2[i]);
    // }
    for(int i = 0;i<s1.size();i++){
        for(int j = 0;j<s2.size();j++){
            if(s1[i]==s2[j]){
                count++;
            }
        }
    }
    // for(auto x : s){
    //     count++;
    // }
    cout<<count;
}