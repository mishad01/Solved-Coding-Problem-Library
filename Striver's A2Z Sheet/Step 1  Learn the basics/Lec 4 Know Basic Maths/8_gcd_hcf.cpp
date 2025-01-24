#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case
    return gcd(b, a % b); // Recursive step
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //GCD -> Grates Common Divisor //Gashagu
    //HCF -> Heighst Common Factor //Loshagu


    return 0;
}