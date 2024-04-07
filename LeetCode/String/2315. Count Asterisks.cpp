#include <string>
#include <stack>

class Solution {
public:
    int countAsterisks(std::string s) {
        int count = 0;
        bool inpair = false;
        for(auto x : s){
            if(x=='|'){
                inpair = !inpair;
            }else if(x=='*' && inpair == false){
                count++;
            }
        }
        return count;
    }
};
