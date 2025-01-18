#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void cyclicPattern(int n, int mod) {
    cout << "2. Cyclic Pattern of Modulus Operations:" << endl;
    for (int i = 1; i < n; ++i) {
        cout << i << " % " << mod << " = " << (i % mod) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    //Data Types
    /*int a;
    long long b;
    float c;
    double d;
    char ch[10];*/

    //Modules;

    /*

    Input:
    5
    33
    25
    75
    88
    56

    Output:
    3, 5, 5, 8, 6

    */

    // 1. Modulus Operations

    /*int a = 17, b = 5;
    cout << "1. Modulus Operations:" << endl;
    cout << a << " % " << b << " = " << (a % b) << endl;*/








    //scanf()
    //cin >> ch;
    //printf()
    //cout<<ch;

     //find smaller value 

    int a = 100;
    int b = 80;
    int c = 50;
    //Gretaer
    if(a<b || a<c){
        cout<<"A is smaller";
    }else if(b<a || b<c){
        cout<<"B is smaller";
    }else{
        cout<<"C is smaller";
    }
}