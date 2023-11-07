#include<iostream>
#include<list>
using namespace std;

int main ()
{
    list<int>li = {1,1,1,2,3,3,4,5,6};

    /*list<int>::iterator it;
    it = li.begin();
    advance(it,3);*/

    li.unique();

    for(auto it:li)
    {
      cout<<it<<" ";
    }
    cout<<endl;
}
