#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
bool isPrime(int n) {
    int divisors = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors++;
        }
    }
    if (divisors == 2) {
        return true;
    }
    else {
        return false;
    }
}
bool isAlmostPrime(int n){
    int primeDivisor = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                primeDivisor++;
            }
        }
    }
    if(primeDivisor==2){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int n;
    cin >> n;int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if(isAlmostPrime(i)==true){
            count++;
        }
    }
    cout<<count;

}