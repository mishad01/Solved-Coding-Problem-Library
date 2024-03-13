#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    int maximum = 0;
    for(int i = 0;i<n;i++){
        getline(cin,v[i]);
        int wordcount = 0;
        bool inWord = false;
        for(char c : v[i]){
            if(c==' '){
                if(inWord){
                    wordcount++;
                    inWord = false;
                }
            }
            else{
                inWord = true;
            }
        }
        if(inWord) { // Check if the last character was part of a word
            wordcount++; // Increment the word count if it was
        }
        maximum = max(maximum,wordcount);
    }
    cout<<maximum;
}