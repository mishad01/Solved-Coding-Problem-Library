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
void p6(int r,int c){
	cout<<"Patter 6 : "<<nl;
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c-i+1;j++){
    		cout<<j;
    	}
    	cout<<nl;
    }
}
void p7(int n){
	for(int i = 0;i<n;i++){
		//space
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		//*
		for(int j = 0;j<2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j = 0;j<n;j++){
			cout<<" ";
		}
		cout<<nl;
	}
}
void p8(int n){
	for(int i = 0;i<n;i++){
		//space
		for(int j = 0;j<i;j++){
			cout<<" ";
		}
		//star
		for(int j = 0;j<(2*n)-(2*i+1);j++){\
			cout<<"*";
		}
		//space
	    for(int j = 0;j<i;j++){
			cout<<" ";
		}	
		cout<<nl;	
	}
}
void p9(int n){
	for(int i = 0;i<1;i++){
		p7(n);
		p8(n);
	}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    p9(r);
    return 0;
}