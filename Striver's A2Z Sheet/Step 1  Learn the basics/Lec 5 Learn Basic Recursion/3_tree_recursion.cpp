#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
/*
1. If a function calling itself only one time
   and there is something to proccess before and
   after recursion call than its " liner recursion "



2. If a function calling itself more than one time
   and there is something to proccess before and
   after recursion call than its "tree recursion"
*/

int treeRec(int n) {
	if (n == 0) {
		return 1;
	}
	cout << n << nl;
	treeRec(n - 1);
	treeRec(n - 1);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    treeRec(3);
    return 0;
}