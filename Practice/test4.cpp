#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   int a[n][n];
   for(int i = 1;i<=n;i++)
   {
    for(int j = 1;j<=n;j++)
    {
        cin>>a[i][j];
    }
    
   }
   for(int i = 1;i<=n;i++)
   {
    for(int j = 1;j<=n;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;

for(int i = 1;i<=n;i++)
   {
    for(int j = 1;j<=n;j++)
    {
        if(i==j)
        {
            cout<<a[i][j]<<" ";
        }

    }
    cout<<endl;
   }

  
    
}