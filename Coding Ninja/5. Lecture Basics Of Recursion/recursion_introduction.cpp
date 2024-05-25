#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int factorial(int n){
	if (n == 0 || n == 1) // Base case
        return 1;
	int smalloutput = factorial (n-1);
	return n + smalloutput;
}
int main() {
   int n;
   cin>>n;
   int output = factorial(n);
   cout<<output;   
}
