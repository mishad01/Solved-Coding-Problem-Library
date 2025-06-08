#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}

	for(auto i = v.rbegin();i!=v.rend();i++){
		cout<<*i<<" ";
	}
}