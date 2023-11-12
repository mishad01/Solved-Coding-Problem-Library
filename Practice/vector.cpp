#include<bits/stdc++.h>
using namespace std;

	
int main()
{
//**************************************
	//************ V E C T O R *************
	//**************************************

	//to give input in vector(push_back);


    //type1 of input; 
	//vector<int>a;
	// a.push_back(10);
	// a.push_back(20);
	// a.push_back(30);
	// //cout<<a[0];//(proces1)

	// for(int i = 0;i<a.size();i++ )
	// {
	// 	cout<<a[i]<<endl;
	// }


	//type 2 of input
	// vector<int>a;
	// int n;
	// cin>>n;
	// for(int i = 0;i<n;i++)
	// {
	// 	int x;
	// 	cin>>x;
	// 	a.push_back(x);
	// }a.pop_back();
	// for(int i = 0;i<a.size();i++)
	// {
	// 	cout<<a[i]<<endl;
	// }

	//type 3 of input

	//ITERATOR IS ACTUALLY A POINTER 

	//vector<int>cur({1,2,3,4,5});
	 //vector<int>:: iterator beg =cur.begin();
	// beg++;
	// //cout<<(*beg)<<endl;

	// for(vector<int>::iterator it = cur.begin()+2; it!=cur.end();it++)
	// {
	// 	cout<<(*it)<<endl;
	// }
	// auto tt = cur.begin()+1;
	// //cout<<(*tt)<<endl;
    
    // reverse(cur.begin(),cur.begin()+3);
    // for(auto x:cur) // for(vector<int>::iterator it = cur.begin()+2; it!=cur.end();it++)
    // {
    // 	cout<<x<<" ";
    // }
	// 

	///////VECTOR USINBG STRING

    //  string s= "abcd";
    //  cout<<s<<" ";
    //  //s.push_back('e');
    //  s+='e';
    //  //s='a'+s;
    // cout<<endl<< s<<" ";
    // s='a'+s;
    // cout<<endl<< s<<" ";
    

    //erase
    vector<int>a = vector<int>({1,2,3,4,5});
    a.erase(a.begin(),a.begin()+4);
    for(auto x: a)
    {
    	cout<<x<<" ";
    }




}
