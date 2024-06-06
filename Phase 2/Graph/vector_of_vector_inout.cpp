#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n); // Vector storing another vector
    for (int i = 0; i < n; i++) {
        int nn;
        cin >> nn;
        vector<int> temp;
        for (int j = 0; j < nn; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v[i] = temp; // Corrected this line
    }
    
    v[0].push_back(4);
    v.push_back(vector<int>());

    for(auto x : v){
    	for(auto y : x){
    		cout<<y<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}
