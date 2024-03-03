/*
1. In C++, when we pass a string to a function or use it in a loop like for(char& c : s),
he loop variable c represents a reference to the characters in the string s.
When we modify c inside the loop, we are directly modifying the characters in the original string s.
This is because c is a reference to the characters in s, not a separate copy of them.

2.So, when we execute c = tolower(c) inside the loop,
 we are converting the character c to lowercase and assigning the result back to the same character in the original string s.
 Since we are modifying s directly inside the loop, the changes made to c reflect in s.

3. Here's the key point: c in the loop is not a copy of the character in s;
 it is a reference to that character. So when we modify c, we are actually modifying the character in s.
 
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
 string s;
 getline(cin, s);
 
 for(char&c : s){
    c = tolower(c);
 }
 cout<<s;

}