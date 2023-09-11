#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    bool test = false;
    if(a==b+c){
        test = true;
    }
    else if(b==c+a){
        test = true;
    }
    else if(c==a+b){
        test = true;
    }
    if(test){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  }
  
}
 