#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    list<int> ls;

    // Adding elements to the list
    ls.push_back(2);          // Add to the end: 2
    ls.emplace_back(4);       // Add to the end: 2 4
    ls.push_front(5);         // Add to the front: 5 2 4
    ls.emplace_front(6);      // Add to the front: 6 5 2 4

    cout << "Initial list: ";
    for (auto x : ls) {
        cout << x << " ";
    }
    cout << nl;

    // Using `begin` and `end` iterators
    cout << "Using iterators (begin to end): ";
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << nl;

    // Using `rbegin` and `rend` iterators (reverse order)
    cout << "Using reverse iterators (rbegin to rend): ";
    for (auto it = ls.rbegin(); it != ls.rend(); ++it) {
        cout << *it << " ";
    }
    cout << nl;

    // Insert elements at a specific position
    auto it = ls.begin();
    advance(it, 2);  // Move iterator to the 2nd position
    ls.insert(it, 10); // Insert 10 at 2nd position: 6 5 10 2 4
    cout << "After insert at position 2: ";
    for (auto x : ls) {
        cout << x << " ";
    }
    cout << nl;

    // Swap contents with another list
    list<int> ls2 = {1, 3, 7};
    cout << "List 2 before swap: ";
    for (auto x : ls2) {
        cout << x << " ";
    }
    cout << nl;

    ls.swap(ls2);
    cout << "List 1 after swap: ";
    for (auto x : ls) {
        cout << x << " ";
    }
    cout << nl;

    cout << "List 2 after swap: ";
    for (auto x : ls2) {
        cout << x << " ";
    }
    cout << nl;

    // Clear the list
    ls.clear();
    cout << "List 1 after clear: ";
    for (auto x : ls) {
        cout << x << " ";
    }
    cout << nl;

    // Check size
    cout << "Size of List 1: " << ls.size() << nl;
    cout << "Size of List 2: " << ls2.size() << nl;

    return 0;
}
