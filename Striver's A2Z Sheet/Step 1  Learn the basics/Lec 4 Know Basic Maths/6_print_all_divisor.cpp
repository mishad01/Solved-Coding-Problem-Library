#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 36;
    cout<<"First Way : ";
    for(int i = 1;i<=n;i++){
    	if(n%i==0){
    		cout<<i<<" ";
    	}
    }
    cout<<nl;

    //Optimized Way
    cout<<"Optimized Way : ";
    int num = 36;
    set<int>s;
    for(int i = 1;i<=sqrt(num);i++){
    	if(num%i==0){
    		s.insert(i);
    		if((num/i)!=i){ // Avoiding printing the square root twice
    			s.insert(n/i);
    		}
    	}
    }

    for(auto x : s){
    	cout<<x<<" ";
    }
    return 0;
}