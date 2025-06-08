#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool isPalindrome(string s){
	int left = 0;
	int right= s.size()-1;
	while(left<right){
		if(s[left]!=s[right]) return false;
		left++;
		right--;
	}
	return true;
}
int substring(string s) {
	int maxLen = 0;
	string longestPalindrome = "";

	int n = s.size();
	set<string>uniqueSub;
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=n-i;j++){
			string sub = s.substr(i,j);
			uniqueSub.insert(sub);
		}
	}
	for(auto x : uniqueSub){
		if(isPalindrome(x) && x.size()>maxLen){
			maxLen = x.size();
			longestPalindrome = x;
		}
	}
	cout<<longestPalindrome;
	return 0;
}

int main() {
	string s;
	cin>>s;

	cout<<substring(s);

}