#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main ()
{
    int a,b;
    int res;
    double c = 2.55;

    cout<<"Input two number";
    cin>>a>>b;

    //max
    res = max(a,b);
    cout<<"Max number is : "<<res<<endl;

    //min
    res = min(a,b);
    cout<<"Min number is : "<<res<<endl;;

    //sqrt
    double re =   sqrt(a);
    cout<<"Square root of "<<a<< " is : "<<re<<endl;
   

    //round
    res=round(c);
    cout<<"Round number of "<<c<< " is : "<<res<<endl;

    //logs

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    re = log(b);
    cout<<"Log of "<<b<< " is : "<<re<<endl;


    return 0;



}