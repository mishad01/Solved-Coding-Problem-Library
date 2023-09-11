#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>v;
    int n;
    cin>>n;
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<n;i++)
    {
        if(v[i]==1)
        {
            count++;
        }

    }
    if(count == 0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }
    
}