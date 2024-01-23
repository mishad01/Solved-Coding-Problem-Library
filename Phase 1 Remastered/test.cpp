#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
	int k,s,z;
	cin>>k>>s;
	int count = 0;
	for(int x =0;x<=k;x++){
		for(int y = 0;y<=k;y++){
			z = s-x-y;
			if(z>=0 && z<=k){
				count++;
			}
		}
	}
	cout<<count;
}
