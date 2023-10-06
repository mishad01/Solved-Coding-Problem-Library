#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int sumOfDigit(int n){
	int sum = 0;
	while(n>0){
		int lastNum = n%10;
		cerr<<sum<<endl;
		sum+=lastNum;
		n = n/10;
	}
	return sum;
}
int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int sum = 0;
	for(int i = 1;i<=n;i++){
		int sumDigit = sumOfDigit(i);
		if(a<=sumDigit && sumDigit<=b){
			sum=sum+i;
		}
	}
	cout<<sum;
}