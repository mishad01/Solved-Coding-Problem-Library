#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //type 1
    pair<int,int>p = {1,2};
    //cout<<p.first<<" "<<p.second;

    //type 2
    pair<int,pair<int,int>>p2 = {1,{1,2}};
    /*cout<<p2.first;
    cout<<p2.second.second;*/

    //type 3
    pair<int,int>arr[]= {{1,2},{2,3},{4,5},};
    cout<<arr[1].second;
}