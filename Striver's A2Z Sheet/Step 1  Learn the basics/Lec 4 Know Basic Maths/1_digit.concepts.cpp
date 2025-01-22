#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    //To get last number from digit just divide it by 10

    int num = 1298;
    cout << "Last digit of " << num << " is: " << num % 10 << endl;
    cout << "Last 2nd digit of " << num << " is: " << (num / 10) % 10 << endl;
    cout << "Last 3rd digit of " << num << " is: " << (num / 100) % 10 << endl;
    cout << "Last 3rd digit of " << num << " is: " << (num / 1000) % 10 << endl;


    //Seperate numbers from digit

    int n = 5678;
    while(n>0){
    	int res = n%10;
    	cout<<res<<" ";
    	n = n/10;
    }
    return 0;
}