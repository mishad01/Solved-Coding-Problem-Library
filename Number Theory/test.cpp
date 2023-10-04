



bool canConstruct(string r, string m) {
    int count = 0;
    for (int i = 0; i < r.size(); i++) {
        bool found = false;  // Flag to check if the character in ransom note is found in the magazine
        for (int j = 0; j < m.size(); j++) {
            if (r[i] == m[j]) {
                found = true;
                m[j] = ' ';  // Mark the character as used to avoid using it again
                count++;
                if (count == r.size()) {
                    return true;
                }
                break;  // Break the inner loop as we found a match for this character
            }
        }
        if (!found)  // If a character in ransom note was not found in magazine, return false
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < numbers.size(); ++i) {
        cin >> numbers[i] ;
    }
    missingNumber(numbers);

}