#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num1,num2;
    cin>>num1;
    vector<int>v;
    for(int i = 0;i<num1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>num2;
    v.erase(v.begin()+num2-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int z : v)
    {
        cout<<z<<" ";
    }
}    