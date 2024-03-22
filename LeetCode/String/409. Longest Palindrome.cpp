class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int count = 0;
        int check = 0;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        for( auto x : mp){
            if(x.second%2==0){
                count=count+x.second;
            }
            else {
                // If check is false (no odd occurrence encountered before)
                if(!check) { 
                    // Increment count by 1 to include one character with an odd occurrence
                    count++;
                    // Mark that an odd occurrence has been encountered
                    check = true;
                }
                // Add (frequency - 1) to count to include all even occurrences
                count += (x.second - 1); 
            }   
            
        }
        return count;
    }
};