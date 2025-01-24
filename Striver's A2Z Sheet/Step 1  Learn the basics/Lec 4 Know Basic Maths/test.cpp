#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Array
    int a[5];
    for(int i = 0;i<5;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //Vector
    vector<int>v = {};
    v.push_back(1);//{1}
    v.push_back(5);//{1,5}
    v.push_back(3);//{1,5,3}


    for(int i = 0;i<3;i++){
        int num;
        cin>>num;
        v.push_back(num);
        //cout<<v[i]<<" ";
    }

    for(auto x : v){
        cout<<x<<" ";
    }

    vector<int>v2(5,2);

    for(auto x : v2){
        cout<<x<<" ";
    }

    vector<int>v1 = {1,2,3,4};
    vector<int>v2 = {10,20,30,40};

    cout<<"V1 : ";
    for(auto x : v1){
        cout<<x<<" ";
    }

    cout<<nl;

    cout<<"V2 : ";
    for(auto x : v2){
        cout<<x<<" ";
    }

    v1.swap(v2);

    cout<<nl;

    cout<<"V1 : ";
    for(auto x : v1){
        cout<<x<<" ";
    }

    cout<<nl;

    cout<<"V2 : ";
    for(auto x : v2){
        cout<<x<<" ";
    }







    

}