#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    set<char>s;
    int count = 0;
    for(int i = 0;i<n;i++){
       a[i]=tolower(a[i]);
       s.insert(a[i]);
    }
    for (auto x: s) {
    //cout << x << ' '<<endl;
    count++;
  }
  if(count==26){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    
}
 