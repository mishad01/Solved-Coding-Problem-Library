/*
sum = sum(n+1)/2;

sum = sum(n-1)+n;

      |0              if n == 0  |
sum = |                          |
      |sum(n-1)+n     if n>0     | 

- Whenever we define any recursive function , we must have two type of statement 
1. First we will see if there is any formula of any large value 
2. For small value what is the answer 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int res = 0;

int sum(int n){
	if(n==0){
		return 0;
	}
	return sum(n-1)+n;
}

int sum2(int n){ //self logic 
	if(n==0){
		return 0;
	}
	res = n+sum(n-1);
	return res;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Your code here
    cout<<sum2(10);
    return 0;
}