#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

string isBalanced(string s){
	int num = s.size();
		stack<char>st;
		bool check = 1;
		for( int i = 0;i<num;i++){
			if(s[i]=='(' || s[i]=='{' || s[i]=='['){
				st.push(s[i]);
			}
			else if (s[i]==')' || s[i]=='}' || s[i]==']'){
				if(st.empty()){
					check = false;
					return "NO";
				}
				else if (s[i]==')' && st.top()!='('){
					check = false;
					return "NO";
				}
				else if (s[i]=='}' && st.top()!='{'){
					check = false;
					return "NO";
				}
				else if (s[i]==']' && st.top()!='['){
					check = false;
					return "NO";
				}
				else{
					st.pop();
				}
			}
		}
		if(st.empty()==true){
			return "YES";
		}
		else{
			return "NO";
		}
}
int main() {
	int q;
	cin >> q;
	while(q--){
		string s;
		cin>>s;
		cout<<isBalanced(s)<<endl;
	}
		
}

