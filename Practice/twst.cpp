#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        if(i%4==0){
            cout<<"#";
        }
        for (int j = 1; j <= b-1; j++) {
            if (i % 2 != 0) {
                cout <<"#";
            }
            else{
                cout<<".";
            }
        }
        else if(i%2==0){
            cout<<"#";
        }
        cout<<endl;
    }
}
