#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int n = a.size()+b.size();
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i = 0;i<a.size();i++){
        mp1[a[i]]++;
    }
    for(int i = 0;i<b.size();i++){
        mp1[b[i]]++;
    }
    for(int i = 0;i<c.size();i++){
        mp2[c[i]]++;
    }
    if(mp1==mp2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    
}
 