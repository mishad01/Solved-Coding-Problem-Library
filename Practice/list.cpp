#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list <int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);



    list <int > :: iterator i;
    i=li.begin();
    advance(i,3);
    li.insert(i,2,7);


    for (auto i : li)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    /*if(li.empty())
    {
        cout<<"Empty";
    }
    else{
        cout<<"Not empty";
    }
    //cout<<li.size();/*










 /*front(),back()

    cout<<li.front()<<endl;;
    cout<<li.back()<<endl;;*/

    //-------------------------

    /*printf or cout process of list
    for (i = li.begin();i != li.end();i++)
    {
        cout<<*i;
    }*/
}
