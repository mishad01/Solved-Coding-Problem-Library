#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0;i<s.size();i++){
        //cerr<<s[i]<<endl;
       if(s[i]=='4' || s[i]=='7'){
        count=count+1;
       }
       //cerr<<count<<endl; 
    }
    if(count==7 || count==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
 