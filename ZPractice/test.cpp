#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	int a, b, c;
	cin >> a >> b;
	int x = a-b;
	double discount_percentage = (double) x / a * 100;
	cout <<fixed << setprecision(10)<< discount_percentage;
}