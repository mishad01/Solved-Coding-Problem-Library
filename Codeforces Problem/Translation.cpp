#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    string b;
    cin>>a>>b;
    int coun = 0;
    int countt =0;
    if(a.size()<b.size())
    {
        //cout<<"NO"<<endl;
        coun++;
    }
    else
    {
       for(int i = 0;i<a.size();i++)
       {
           //cerr<<a[i]<<" "<<b[a.size()-i-1]<<endl;
           if(a[i]==b[a.size()-i-1])
           {
               countt++;
           }
           else
           {

               coun++;
           }
       }
    }
if(coun==0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

}