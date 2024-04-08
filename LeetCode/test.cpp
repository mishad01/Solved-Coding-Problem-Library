#include <iostream>
using namespace std;

#define ll long long
#define nl '\n'

int main() {
    char a;
    cin >> a;
    // Convert character to integer
    int num = a - '0';
    // Increment integer by 1
    num++;
    // Convert integer back to string
    string b = to_string(num);
    cout << b << nl;
}
