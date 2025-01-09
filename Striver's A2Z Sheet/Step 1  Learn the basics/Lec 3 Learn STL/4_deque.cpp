 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define nl '\n'
 int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     deque<int>dq;
     dq.push_back(5);
     dq.emplace_back(5);
     dq.push_front(19);
     dq.emplace_front(20);

     dq.pop_back();
     dq.pop_front();

     //begin,end,rbegin,remd,clear, insert,size(),swap

     for(auto x : dq){
     	cout<<x<<" ";
     }
     return 0;
 }