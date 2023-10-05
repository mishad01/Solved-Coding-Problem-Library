#include <iostream>
#include <set>

int main() {
    int arr[] = {5, 10, 3, 8, 15};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::set<int> se;

    // Insert elements from the array into the set
    for (int i = 0; i < arrSize; ++i) {
        se.insert(arr[i]);
    }

    // Iterate through the set using an iterator
    for (auto it = se.begin(); it != se.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
