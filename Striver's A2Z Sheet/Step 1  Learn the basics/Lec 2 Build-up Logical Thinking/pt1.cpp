#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void p1(int r,int c){
	cout<<"Patter 1 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
void p2(int r,int c){
	cout<<"Patter 2 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
void p3(int r,int c){
	cout<<"Patter 3 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<j;
    	}
    	cout<<nl;
    }
}
void p4(int r,int c){
	cout<<"Patter 4 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<i;
    	}
    	cout<<nl;
    }
}
void p5(int r,int c){
	cout<<"Patter 2 : "<<nl;
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c-i+1;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    p5(r,c);
    return 0;
}