#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int>st;
    //LIFO -> LAST IN FIRST OUT
    st.push(1); //1
    st.push(2); //2 1
    st.push(3); //3 2 1
    st.push(4); //4 3 2 1
    st.emplace(5); //5 4 3 2 1
    st.push(6);
    st.push(6);
    cout<<st.top()<<nl;
    cout<<st.size()<<nl;
    return 0;
}