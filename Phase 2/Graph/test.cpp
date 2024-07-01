#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool isOperator(char c) {
    string operators = "+-*/%=&|<>!^~";
    return operators.find(c) != string :: npos;
}

bool isIdentifierStart(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '_');
}

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(isIdentifierStart(s[i])){
            cout << s[i] << " is an identifier" << nl;
        } else if(isOperator(s[i]) || s[i] == '@' || s[i] == ':'){
            cout << s[i] << " is an operator" << nl;
        } else {
            cout << s[i] << " is neither an identifier nor an operator" << nl;
        }
    }
    return 0;
}
