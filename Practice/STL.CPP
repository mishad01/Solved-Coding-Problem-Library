 #include<bits/stdc++.h>
using namespace std;
// struct point{
// 		int x,y;
// 	}p;
	
int main()
{
	//////////////////AUTO//////////////
	// int x = 10;
	// auto b = yo(10);
	// cout<<b;


    /////////pair///// //////////
	// pair<int,int>a;
	// a = make_pair(0,6);
	// cout<<a.first<< " "<< a.second<<endl;

	/////////////tuple///////////
	// tuple<int,int,int>x;
	// x = make_tuple(1,2,3);
	// cout<<(get<0>(x))<< " "<<(get<1>(x))<< " "<<(get<2>(x));

	///////////////////Sturcture/////////////////
	//point p;
	// p.x = 10;
	// p.y = 20;

	// cout<<p.x + p.y<<endl;



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
	// vector<int>:: iterator beg =cur.begin();
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
	


	///////////////////////STACK/////////////////
	//Only push,pop and top
	// stack<int>a;
	// st.push(1);
	// st.push(2);
	// st.pop();
	// st.top();


	//////////////////QUEUE///////////
	// queue<int>a;
	// a.push(2);
	// a.push(3);
	// a.push(4);
	// cout<<a.front();


  //////////////////DEQUEUE///////////
	// q.push_back;
	// q.push_front;
	// q.pop_back;
	// q.pop_front; 

	//////////////////PRIORITY QUEUE///////////

     // here it will be like 4,3,2,1
      //priority_queue<int>q;

 
      //////////////////SET///////////
	//distinct value sorted way te thakbe
	//EIKHANE VALUE SORTED WAY TE THAKBE 
	//WE CAN NOT 
	//shob kaj iterator diye kora lagbe 
   set<int>se;
   se.insert(3);
   se.insert(2);
   se.insert(7);
   se.insert(9);
   // auto it = se.begin();
   // cout<<(*it)<<" ";
   // ++it;
   // cout<<(*it)<<" ";
   ///insertion//////
   // int n;
   // cin>>n;

   // for(int i = 0;i<4;i++)
   // {
   // 	int x;
   // 	cin>>x;
   // 	se.insert(x);
   // }
  // se.erase(6);
   // for(auto x:se)
   // {
   // 	cout<<x<<" ";
   // }
   cout<<(*se.end());
   //min value 
   //cout<<(*se.begin())<<endl;
   //max value
   //cout<<*(--se.end());

   /////////////////////MULTISET////////////////
   //IF WE GIVE erase(2)..all the elemnt of 2 will erase 
   //if we need to erase only one then we have to use iterator (170 line)

   // multiset<int>mul;
   // mul.insert(2);
   // mul.insert(3);
   // mul.insert(2);
   // mul.insert(1);
   // for(auto x:mul)
   // {
   //   cout<<x<<" ";
   // }
   // cout<<endl;
   // auto it = mul.find(2);
   // mul.erase(it);
   // for(auto x:mul)
   // {
   //   cout<<x<<" ";
   // }









}