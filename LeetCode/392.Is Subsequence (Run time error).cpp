#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isSubsequence(string s, string t) {
	// sort(s.begin(), s.end());
	// sort(t.begin(), t.end());
	//cerr<<s<<" "<<t<<endl;
	vector<char>v;
	bool c = 1;
	if (s.size() == 0) {
		c = true;
	}
	else {
		for (int i = 0; i < t.size(); i++) {
			for(int j = 0;j < s.size();j++){
				//cerr<<s[i]<<" "<<t[j]<<endl;
				if(t[i]==s[j]){
					v.push_back(t[i]);
				}
			}
		}
	}
	
	for(int i = 0;i<s.size();i++){
		if(v[i]!=s[i]){
			c=0;
		}
		//cerr<<v[i];
	}
	return c;


}
int main() {
	string s;
	string t;
	cin >>s>> t;
	//cerr << s.size();
	cout << isSubsequence(s, t);

}