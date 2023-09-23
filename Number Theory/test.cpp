#include<bits/stdc++.h>
using namespace std;
int main(){
	string txt;
	cin>>txt;
	map<char,long long>mp;
	for(int i = 0;i<txt.size();i++){
		mp[txt[i]]++;
	}

	long long max = 0;
	for (auto x: mp) {
		if(max<x.second){
			max = x.second;
		}
  }
  cout<<max;
}