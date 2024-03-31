class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s(allowed.begin(),allowed.end());
        int count = 0;
        for(auto y : words){
            bool check = true;
            for(auto x : y ){
                //checks if not found
                if(s.find(x)==s.end()){
                    check = false;
                    break;
                }
            }
            if(check == true){
                count++;
            }
        }
        return count;
    }
};

/*Word: "ad"

y = "ad"
For each character x in "ad":
Character 'a': Found in allowed, continue.
Character 'd': Not found in allowed, so the loop breaks.
check is false, so count remains unchanged.
Word: "bd"

y = "bd"
For each character x in "bd":
Character 'b': Found in allowed, continue.
Character 'd': Not found in allowed, so the loop breaks.
check is true, so count is incremented.
Word: "aaab"

y = "aaab"
For each character x in "aaab":
Character 'a': Found in allowed, continue.
Character 'a': Found in allowed, continue.
Character 'a': Found in allowed, continue.
Character 'b': Found in allowed, continue.
All characters are found in allowed, so check remains true, and count is incremented.
Word: "baa"

y = "baa"
For each character x in "baa":
Character 'b': Found in allowed, continue.
Character 'a': Found in allowed, continue.
Character 'a': Found in allowed, continue.
All characters are found in allowed, so check remains true, and count is incremented.
Word: "badab"

y = "badab"
For each character x in "badab":
Character 'b': Found in allowed, continue.
Character 'a': Found in allowed, continue.
Character 'd': Not found in allowed, so the loop breaks.
check is false, so count remains unchanged.
After processing all words:

count will be 3, because there are three consistent strings: "bd", "aaab", and "baa".*/