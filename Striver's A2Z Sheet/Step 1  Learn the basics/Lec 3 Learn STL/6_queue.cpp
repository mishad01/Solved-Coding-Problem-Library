#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FIFO = First in First out

    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    while(!q.empty()){
    	cout<<q.front()<<" ";
    	q.pop();
    }

    return 0;
}