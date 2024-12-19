#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
/*
  In nested recursion, recursive function will pass perameter as recursive call 
*/
int nestedRec(int n){
	if(n>100){
		return n-10;
	}else{
		return nestedRec(nestedRec(n+11));
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<nestedRec(95);
    return 0;
} 

/*Step-by-step Execution:
nestedRec(95) is called.

Since 95 is less than 100, we proceed to the recursive call: nestedRec(nestedRec(95 + 11)) = nestedRec(nestedRec(106)).
nestedRec(106) is called.

Since 106 is greater than 100, we return 106 - 10 = 96.
Now we go back to nestedRec(95):

This becomes nestedRec(96).
nestedRec(96) is called.

Since 96 is less than 100, we proceed to the recursive call: nestedRec(nestedRec(96 + 11)) = nestedRec(nestedRec(107)).
nestedRec(107) is called.

Since 107 is greater than 100, we return 107 - 10 = 97.
Now we go back to nestedRec(96):

This becomes nestedRec(97).
nestedRec(97) is called.

Since 97 is less than 100, we proceed to the recursive call: nestedRec(nestedRec(97 + 11)) = nestedRec(nestedRec(108)).
nestedRec(108) is called.

Since 108 is greater than 100, we return 108 - 10 = 98.
Now we go back to nestedRec(97):

This becomes nestedRec(98).
nestedRec(98) is called.

Since 98 is less than 100, we proceed to the recursive call: nestedRec(nestedRec(98 + 11)) = nestedRec(nestedRec(109)).
nestedRec(109) is called.

Since 109 is greater than 100, we return 109 - 10 = 99.
Now we go back to nestedRec(98):

This becomes nestedRec(99).
nestedRec(99) is called.

Since 99 is less than 100, we proceed to the recursive call: nestedRec(nestedRec(99 + 11)) = nestedRec(nestedRec(110)).
nestedRec(110) is called.

Since 110 is greater than 100, we return 110 - 10 = 100.
Now we go back to nestedRec(99):

This becomes nestedRec(100).
nestedRec(100) is called.

Since 100 is not greater than 100, we proceed to the recursive call: nestedRec(nestedRec(100 + 11)) = nestedRec(nestedRec(111)).
nestedRec(111) is called.

Since 111 is greater than 100, we return 111 - 10 = 101.
Now we go back to nestedRec(100):

This becomes nestedRec(101).
nestedRec(101) is called.

Since 101 is greater than 100, we return 101 - 10 = 91.
Final Output:
The final result of nestedRec(95) is 91.*/