#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words = {"ad", "bd", "aaab", "baa", "badab"};
    std::map<std::string, int> wordMap;

    // Iterate through the vector
    for (int i = 0; i < words.size(); ++i) {
        // Insert each word into the map with its length as the value
        wordMap[words[i]] = words[i];
    }

    // Printing the map
    for (const auto& pair : wordMap) {
        std::cout << "Word: " << pair.first << ", Length: " << pair.second << std::endl;
    }

    return 0;
}
