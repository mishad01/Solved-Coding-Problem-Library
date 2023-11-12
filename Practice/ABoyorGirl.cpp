 #include<bits/stdc++.h>
using namespace std;
int main ()
{
	string a;
	string b;
	getline(cin,a);
	int count=0;
	int n = a.size();
	for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        if(a[i] == a[j])
            {
                b=b+a[i];
            }
        }
    }
	int l = a.length() - b.length() ;
  if(l%2==0)
  {
    cout<<"CHAT WITH HER!"<<endl;
  }
	else
  {
    cout<<"IGNORE HIM!"<<endl;
  }

}
