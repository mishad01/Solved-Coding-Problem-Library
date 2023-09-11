#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	int n;
	cin>>n;
	int x;
	cin>>x;
	set<int>a;
	for(int i = 0;i<x;i++){
		cin>>num;
		a.insert(num);
	}
	int y;
	cin>>y;;
	for(int i = 0;i<y;i++){
		cin>>num;
		a.insert(num);
	}
	if(a.size()==n){
		cout<<"I become the guy.";
	}
	else{
		cout<<"Oh, my keyboard!";
	}
}