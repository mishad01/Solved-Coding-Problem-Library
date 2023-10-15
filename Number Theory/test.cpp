#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main(){
    double n , k,a ,operation;
    cin >>n >> k>> a;
    operation = (n * k) / a ;
    // cout << operation ;
    long long myNum = operation;

    
    if (operation == int(operation))
    cout<< "int" ;
    else if (operation == myNum) {
        cout<< "long long" ;

    }
    else{
        cout<< "double" ;

    }
    return 0;
}
