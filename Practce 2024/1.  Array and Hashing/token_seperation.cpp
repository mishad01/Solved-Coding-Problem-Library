#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

bool checkOperator(char c){
	string operators = "+-*/&|<>!^~=";
	return operators.find(c)!=string :: npos;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	int n = s.size();
	for(int i = 0;i<n;i++){
		if(s[i]>='a' && s[i]<'z' || s[i]>='A' && s[i]<'Z'){
			cout<<s[i]<<" is an identifier"<<endl;
		}else if(checkOperator(s[i])){
			cout<<s[i]<<" is an operator"<<endl;
		}else{
			cout << s[i] << " is neither an identifier nor an operator" << endl;
		}
	}
}