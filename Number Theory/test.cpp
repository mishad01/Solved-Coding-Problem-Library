#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i = 1 ;i*i<=n;i++ ){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i)
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(k>=v.size()){
        cout<<-1;
    }
    else
    {
        cout<<v[k-1];
    }
}