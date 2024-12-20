/*
Taylor Series : e^x using Recursion
...................
e^x = 1+ (x/1!) + (x^2/2!) + (x^3/3!)+(x^4/4!)+...+ n ;

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

double e(int x, int n) {
	static double p = 1, f = 1;
	double res = 0;
	if (n == 0) {
		return 1;
	}
	res = e(x, n - 1);
	p = p * x;
	f = f * n;
	return res + p / f;

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << e(4, 10);
	return 0;
}