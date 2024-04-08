class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string temp;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i]==s[n-i-1]){
                temp +=s[i];
            }else if(s[i]<s[n-i-1]){ //the lexicographically smaller character
                temp+=s[i];
            }
            else{
                temp+=s[n - i - 1];
            }
        }
        return temp;
    }
};
/*
we have the string s = "egcfe" as given in the first example:

The length of the string s is 5 (i.e., n = 5).
During the iteration, i starts from 0 and goes up to n - 1 (inclusive), which means from 0 to 4.
Now, let's go through the condition s[i] < s[n - i - 1] with the example string "egcfe":

When i = 0:

s[i] refers to the character 'e'.
s[n - i - 1] refers to the character 'e' as well.
Since both characters are equal, we append s[i] to temp.
When i = 1:

s[i] refers to the character 'g'.
s[n - i - 1] refers to the character 'f'.
Here, 'g' < 'f', which means 'g' is lexicographically smaller than 'f'. So, we append s[i] (i.e., 'g') to temp.
When i = 2:

s[i] refers to the character 'c'.
s[n - i - 1] refers to the character 'c' as well.
Since both characters are equal, we append s[i] to temp.
When i = 3:

s[i] refers to the character 'f'.
s[n - i - 1] refers to the character 'g'.
Here, 'f' < 'g', so we append s[i] (i.e., 'f') to temp.
When i = 4:

s[i] refers to the character 'e'.
s[n - i - 1] refers to the character 'e' as well.
Since both characters are equal, we append s[i] to temp.
*/