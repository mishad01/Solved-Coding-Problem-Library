#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  while(n--){
    string a;
    cin>>a;
    for(int i = 0;i<a.size();i++)
    {
        a[i]=toupper(a[i]);
    }
    if(a=="YES"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  }
  
}
 