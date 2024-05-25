#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int print(int n){
      if(n==0){
            return 0;
      }else{
            print(n-1);
            cout<<n<<nl;
      }
}
int main() {
      int n;
      cin>>n;
      print(n);
}