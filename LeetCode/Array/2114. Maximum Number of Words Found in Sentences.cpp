#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string>v(n);
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        getline(cin, v[i]);
        int wordCount = 0; // Initialize word count for the current sentence
        bool inWord = false; // Flag to indicate whether currently inside a word

        for (char c : v[i]) { // Loop through each character of the sentence
            if (c == ' ') { // If the character is a space
                if (inWord) { // If we were inside a word
                    wordCount++; // Increment the word count
                    inWord = false; // Reset the flag for being inside a word
                }
            } else { // If the character is not a space
                inWord = true; // Set the flag for being inside a word
            }
        }

        if (inWord) { // Check if we are still inside a word after processing all characters
            wordCount++; // If so, increment the word count one last time
        }
        maximum = max(maximum, wordcount);
    }
    cout << maximum;
}