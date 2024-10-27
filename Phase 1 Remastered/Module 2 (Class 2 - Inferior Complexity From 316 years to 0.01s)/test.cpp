#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define PI 3.1416
#define ADD(a,b) (a+b) //We can also define function using macros
#define square(x,y) x*y

bool check(char x){
    string op = "+-*/%><|&";
    return op.find(x)!=string ::npos;
}
int main() { // notice that we are using int32_t instead of int here because int is redefined as long long
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    string op = "";  // Proper initialization with double quotes
    string temp = ""; 
    for(auto x : s){
        if (check(x)){
            op+=x;
        }else if((int)x >=48  && int(x)<=57){
            temp+=x;
        }
    }
    reverse(op.begin(),op.end());
    cout<<op+temp<<" ";
}