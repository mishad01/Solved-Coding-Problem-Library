class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        sort(s.rbegin(),s.rend()); //sorting the string in descending order.
    //For example, if you have a string s = "0101", after applying sort(s.rbegin(), s.rend()), the string becomes "1100".
        for(int i = n-1;i>=0;i--){
            if(s[i]=='1'){
                swap(s[i],s[nP-1]);
            }
        }
        return s;
    }
};