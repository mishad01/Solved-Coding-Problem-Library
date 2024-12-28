#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//1
	vector<int>v1 = {1, 2};
	//cout<<v1[1];

	//2
	vector<int>v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		cout << v[i] << nl;
	}

	//3->Same value repeated time
	vector<int>v3(5, 2);
	for (auto x : v3) {
		cout << x << " ";
	}

	//4
	cout << nl;
	vector<int>v4(v3);
	for (auto x : v3) {
		cout << x << " ";
	}


	/*Iteration
	   1. v.begin() = it gives memory
	   - *(v.begin) =  it gives value that present in memory

	   2. v.end() = it gives value thats right after the array

	   //3,4 not that emportant
	   3. v.rend() = right after end, basically points first pos
	   4. v.rbegin() = right begin , basically points last

	 */
	cout << nl;
	vector<int>v5 = {1, 2, 3, 4, 5, 6, 7, 8};
	vector<int>::iterator it = v5.begin();
	it++;
	cout << *(it) << " ";

	it += 2;
	cout << *(it) << " ";

	cout << nl;
	/*
	vector<int>::iterator it = v.end();
	vector<int>::iterator it = v.rend();
	vector<int>::iterator it = v.rbegin();
	*/

	//v.begin()
	vector<int> v7 = {1, 2, 3};
	cout << *v7.begin(); // Output: 1

	cout << nl;
	//v.end()
	for (auto it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " "; // Outputs all elements: 1 2 3
	}

	cout << nl;
	//v.rend()
	for (auto it = v.rbegin(); it != v.rend(); ++it) {
		std::cout << *it << " "; // Outputs in reverse order: 3 2 1
	}


	//Erase
	//{10,20,12,23,35};
	v7.erase(v.begin()+1); //{10,12,23}

	//{10,20,12,23,35};
	v7.erase(v.begin()+2,v.begin()+4); //{10,20, , ,23}


	//insert
	vector<int>v(2,100); //{100,100}
	v.insert(v.begin(),300); //{300,100,100}
	v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

	vector<int>copy(2,100);
	v.insert(v.begin(),copy.begin(),copy.end()); //{300,10,10,100,100}
	

    //{10,20}
	v.pop_back() //10

	//{10,20}
	v1.swap(v2); //{20,10}

	v.clear() //clears everything

	v.empty() //return true if empty

	return 0;
}