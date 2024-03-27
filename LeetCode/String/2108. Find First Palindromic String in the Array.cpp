class Solution {
public:
/*bool isPalindrome(string word) {
    sort(word.begin(),word.end());
    map<char, int>mp;
    for (int i = 0; i < word.size(); i++) {
        mp[word[i]]++;
    }
    if (word.size() % 2 == 0) {
        for (auto x : mp) {
            if (x.second%2 != 0) {
                return false;
            }
        }
    }else{
        int count = 0;
        for(auto x : mp){
            if(x.second%2!=0){
                count++;
            }
        }
        if(count!=1){
            return false;
        }
    }
    return true;
}*/
bool isPalindrome(string word) {
    int left = 0,right = word.size()-1;
    while(left<right){
        if(word[left]!=word[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

    string firstPalindrome(vector<string>& words) {
        for(auto x : words){
            if(isPalindrome(x)){
                return x;
            }
        }
        return "";
    }
};