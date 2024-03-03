#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main() {
    // Declare a string variable to store the input
    string s;

    // Read the entire line including spaces
    getline(cin, s);

    // Trim trailing spaces from the end of the string
    while (!s.empty() && s.back() == ' ') {
        s.pop_back();
    }

    // Find the index of the last space character
    int n = s.find_last_of(' ');

    // Extract the substring starting from the character after the last space
    string lastWord = s.substr(n + 1);

    // Calculate the length of the last word
    int lenOfLastWord = lastWord.size();

    // Return the length of the last word
    return lenOfLastWord;
}
