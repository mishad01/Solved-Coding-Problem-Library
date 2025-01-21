#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<int> st;
    // LIFO -> LAST IN FIRST OUT
    st.push(1); // 1
    st.push(2); // 2 1
    st.push(3); // 3 2 1
    st.push(4); // 4 3 2 1
    st.emplace(5); // 5 4 3 2 1
    st.push(6); // 6 5 4 3 2 1
    st.push(7); // 7 6 5 4 3 2 1

    cout << st.top() << nl;  // Prints the top element (7)
    cout << st.size() << nl; // Prints the size of the stack (7)

    // Print and remove all elements from the stack
    while (!st.empty()) {
        cout << st.top() << " "; // Access the top element
        st.pop();                // Remove the top element
    }

    return 0;
}
