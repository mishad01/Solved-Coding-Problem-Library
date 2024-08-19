#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    string s;
    getline(cin, s);
    stack<string> st;
    string word;

    // Split the string into words and push each word to the stack
    for (auto x : s) {
        if(x==' '){
            st.push(word);
            word="";
        }else{
            word+=x;
        }
    }
    st.push(word); // Push the last word

    // Print and pop words from the stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << nl;

    return 0;
}
