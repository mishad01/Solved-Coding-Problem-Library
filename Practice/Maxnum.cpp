#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		//cerr<<a[i]<<endl;
	}
	int max = INT_MIN; //Here INT_MIN = -Infinity
	int min = INT_MAX; //Here INT_MAX = +Infinity
	//We can use this to also;
	//int max = a[0]; 
	//int min = a[0];
	for(int i = 0;i<n;i++){
		if(a[i] > max){
            max = a[i];
        }
        if(a[i]<min){
        	min = a[i];
        }
	}
	cout<<"Maximum Value is : "<<max<<endl;
	cout<<"Minimum Value is :"<<min<<endl;
	//Done by MISHAD

}
