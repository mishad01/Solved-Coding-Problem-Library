#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string text = "WUB";
    int ind = s.find(text);
    while(ind!=-1){
        s.replace(ind,text.size()," ");
        ind=s.find(text,ind+1);
    }
    cout<<s;
}
 