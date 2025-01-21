#include<bits/stdc++.h>
using namespace std;

#define ll long long // Define 'll' as shorthand for 'long long'
#define nl '\n' // Define 'nl' as shorthand for a newline character

int main() {
    ios_base::sync_with_stdio(0); // Fast input-output optimization
    cin.tie(0); // Untie cin from cout for faster input

    // Declare a max-heap
    priority_queue<int> pq; 

    // Push elements into the priority queue
    pq.push(5); // Add 5 to the heap
    pq.push(2); // Add 2 to the heap
    pq.push(8); // Add 8 to the heap
    pq.push(3); // Add 3 to the heap
    pq.push(9); // Add 9 to the heap

    /*
    Priority queue internal structure after each push (max-heap):

    Initial state:
    (empty)

    After pq.push(5):
    5

    After pq.push(2):
    5
    2

    After pq.push(8):
    8
    5
    2

    After pq.push(3):
    8
    5
    3
    2

    After pq.push(9):
    9
    8
    5
    3
    2
    */

    cout<<"Before pop: "<<nl;
    cout<<pq.top()<<nl;
    pq.pop();
    cout<<"After pop: "<<nl;
    cout<<pq.top()<<nl;

    /*
    Minimum Heap -> I want a priority queue
                    which stores the minimum element at the top
    */
    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(5); // Add 5 to the heap
    pq2.push(2); // Add 2 to the heap
    pq2.push(8); // Add 8 to the heap
    pq2.push(3); // Add 3 to the heap
    pq2.push(9); // Add 9 to the heap

    cout<<"Minimum Heap : "<<nl;
    while(!pq2.empty()){
    	cout<<pq2.top()<<" ";
    	pq2.pop();
    }


    return 0; // End of program
}
