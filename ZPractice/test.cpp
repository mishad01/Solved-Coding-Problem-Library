// Fibonacci Series using Space Optimized Method 
#include<bits/stdc++.h> 
using namespace std; 

int fib(int n) 
{ 
	int a = 0, b = 1, c, i; 
	if( n == 0) 
		return a; 
	for(i = 2; i <= n; i++) 
	{ 
	c = a + b; 
	a = b; 
	b = c; 
	} 
	return b; 
} 

// Driver code 
int main() 
{ 
	int n; cin>>n;
	for(int i = 0;i<n;i++){
		cout<<fib(i)<<" ";
	}
} 
