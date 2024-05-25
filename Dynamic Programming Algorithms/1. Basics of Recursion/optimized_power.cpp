#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int fastpower (int b,int p){
	if(p==0){
		return 1;
	}
	int halfpower = fastpower(b,p/2);
	if(p%2==0){
		return halfpower * halfpower;
	}else{
		return b * halfpower * halfpower;
	}

}
int main() {
    int b,p;
    cin>>b>>p;
    cout<<fastpower(b,p);
}