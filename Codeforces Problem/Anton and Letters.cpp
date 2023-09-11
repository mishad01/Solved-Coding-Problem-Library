#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin,a);
    //cout<<a;
    map<char,int>mp;
    int count = 0;
    for(int i = 0;i<a.size();i++){
       if(a[i]=='{'||a[i]=='}'||a[i]==','||a[i]==' ')
        {
            continue;
        }
        else{
            mp[a[i]]++;
        }
    }
    cout<<mp.size();

}