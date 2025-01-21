#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	/*set<int>s;
	s.insert(5);
	s.insert(2);
	s.insert(2);
	s.insert(1);
	s.insert(8);*/

	set<int> s = {10, 20, 30, 40, 50};
    
    cout << "Set elements: ";
    for (auto x : s) cout << x << " ";
    cout << nl;

    // Using find
    auto it = s.find(30);
    if (it != s.end()) cout << "Found 30" << nl;
    else cout << "30 not found" << nl;

    // Using lower_bound and upper_bound
    cout << "Lower bound of 25: " << *s.lower_bound(25) << nl;
    cout << "Upper bound of 25: " << *s.upper_bound(25) << nl;

    // Using size and empty
    cout << "Size: " << s.size() << nl;
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << nl;

    // Using erase and clear
    s.erase(20);
    cout << "After erasing 20: ";
    for (auto x : s) cout << x << " ";
    cout << nl;

    s.clear();
    cout << "After clearing, is empty? " << (s.empty() ? "Yes" : "No") << nl;

    return 0;
}