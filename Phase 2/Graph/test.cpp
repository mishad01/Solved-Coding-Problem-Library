#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x,y;
};
int main() {
    int t;
    t = 10;
    pair<int,int>p1,p2;
    p1 = make_pair(0,3);
    p2 = make_pair(5,8);
    swap(p1,p2);
    //cout<<p1.first<<" "<<p1.second<<endl;
    pair<pair<int,int>,int>pr;
    //pr = make_pair(make_pair(0,1),2);
    //cout<<pr.second<<endl;
    tuple<int,int,int>x;
    x = make_tuple(1,2,3);
    //cout<<(get<2>(x));

    Point p;
    p.x = 10;
    p.y = 10;
    //cout<<p.x<<endl;

    vector<int>v({1,2,3});
    reverse(v.begin(),v.end());
    // for(auto x : v){
    //     cout<<x<<" ";
    // }

    //priority_queue<int>st;
    priority_queue<int,vector<int>,greater<int>>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    //st.pop();
    cout<<st.top();

}