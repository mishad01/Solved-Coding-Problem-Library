#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

/*
0000 = 0
0001 = 1
0010 = 2
0011 = 3
0100 = 4
0101 = 5
0110 = 6
0111 = 7
1000 = 8
1001 = 9
1010 = 10
1011 = 11
1100 = 12
1101 = 13
1110 = 14
1111 = 15
*/

// Checks if kth bit of x is set (1) or not (0)
int check_kth_bit(int x, int k) {
	return (x >> k) & 1;
}

// Prints the positions of all set (1) bits in binary representation of x
/*For 10 output 1,3  This corresponds to: Bit 0 (rightmost) = 0 || Bit 1 = 1 || Bit 2 = 0 || Bit 3 = 1
For x = 10 (binary 1010): i = 0 (not set), i = 1 (set, print 1), i = 2 (not set), i = 3 (set, print 3)*/
void print_set_bits(int x){
	for(int i = 0;i<32;i++){
		if(check_kth_bit(x,i)){
			cout<<i<<" "<<nl;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << "Check 2nd bit of 11:" << check_kth_bit(11, 1) << nl;
	print_set_bits(10);
}