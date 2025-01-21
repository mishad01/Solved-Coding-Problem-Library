#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //Same as sets
    //Just stores duplicate values
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); //It erases every 1

    //Only erases a single one
    ms.erase(ms.find(1));

    //If I wanna erase two ones
    ms.erase(ms.find(1),ms.find(1)+2); //As we erase two 1 then two 1 removes , if we've used 3 ones it wouldve remove 3 one

    //Other functions are same as set


    return 0;
}