#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string reversedString = ""; // To store the reversed string
        string currentWord = "";    // To store the current word being processed

        for (char c : s) {
            if (c == ' ') { // If we encounter a space, it means the end of a word
                reverse(currentWord.begin(), currentWord.end()); // Reverse the current word
                reversedString += currentWord + ' '; // Add the reversed word to the result string
                currentWord = ""; // Reset currentWord for the next word
            } else {
                currentWord += c; // Add the character to the current word
            }
        }

        // Handling the last word (no space after it)
        reverse(currentWord.begin(), currentWord.end()); // Reverse the last word
        reversedString += currentWord; // Add the last word to the result string

        return reversedString;
    }
};
