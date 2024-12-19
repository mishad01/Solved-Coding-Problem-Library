#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
/*
Function calling another function is known as indirect function
*/

// Function prototypes
void indirectRecA(int n);
void indirectRecB(int n);

void indirectRecB(int n){
	if(n>1){
		cout<<n<<" ";
		indirectRecA(n/2);
	}
}

void indirectRecA(int n){
	if(n>0){
		cout<<n<<" ";
		indirectRecB(n-1);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    indirectRecA(20);
    return 0;
}