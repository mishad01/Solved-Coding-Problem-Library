#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void p1(int r,int c){
	cout<<"Patter 1 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
void p2(int r,int c){
	cout<<"Patter 2 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
void p3(int r,int c){
	cout<<"Patter 3 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<j;
    	}
    	cout<<nl;
    }
}
void p4(int r,int c){
	cout<<"Patter 4 : "<<nl;
	
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=i;j++){
    		cout<<i;
    	}
    	cout<<nl;
    }
}
void p5(int r,int c){
	cout<<"Patter 2 : "<<nl;
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c-i+1;j++){
    		cout<<"*";
    	}
    	cout<<nl;
    }
}
void p6(int r,int c){
	cout<<"Patter 6 : "<<nl;
	for(int i = 1;i<=r;i++){
    	for(int j = 1;j<=c-i+1;j++){
    		cout<<j;
    	}
    	cout<<nl;
    }
}
void p7(int n){
	for(int i = 0;i<n;i++){
		//space
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		//*
		for(int j = 0;j<2*i+1;j++){
			cout<<"*";
		}
		//space
		for(int j = 0;j<n;j++){
			cout<<" ";
		}
		cout<<nl;
	}
}
void p8(int n){
	for(int i = 0;i<n;i++){
		//space
		for(int j = 0;j<i;j++){
			cout<<" ";
		}
		//star
		for(int j = 0;j<(2*n)-(2*i+1);j++){\
			cout<<"*";
		}
		//space
	    for(int j = 0;j<i;j++){
			cout<<" ";
		}	
		cout<<nl;	
	}
}
void p9(int n){
	for(int i = 0;i<1;i++){
		p7(n);
		p8(n);
	}
}
void p10(int n){
	for(int i = 0;i<2*n;i++){
		int start = i;
		if(i>n){
			start = 2*n-i;
		}
		for(int j = 0;j<start;j++){
			cout<<'*';

		}
		cout<<nl;
	}
}
void p11_1(int n) {
    for (int i =0;i<n;i++) {
        if (i%2==0) {
            for(int j=0;j<i+1;j++) {
                if(j%2==0){
                    cout<<"1"<<" ";
                }else{
                   cout << "0"<<" ";
               }
            }
        }else{
        	for(int j=0;j<i+1;j++) {
                if(j%2==0){
                    cout<<"0"<<" ";
                }else{
                   cout << "1"<<" ";
               }
            }
        }

        cout << nl;
    }
}
void p11_2(int n) {
    for (int i =0;i<n;i++) {
    	int start = 1;
        if(i%2==0){
        	start = 1;
        }else{
        	start = 0;
        }
        for(int j = 0;j<i+1;j++){
        	cout<<start<<" ";
        	start = 1-start;
        }
        cout<<nl;
    }
}
//formula, ai = a1+(n-1)d
void p12(int n){
	for(int i = 0;i<n;i++){
		//num
		for(int j = 1;j<=i+1;j++){
			cout<<j;
		}
		//space
		for(int j = 1;j<(n*2-2)-(2*i-1);j++){
			cout<<" ";
		}
		//num
		for(int j = i+1;j>=1;j--){
			cout<<j;
		}
		cout<<nl;
	}
}
void p13(int n){
	int res = 1;
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=i+1;j++){
			cout<<res<<" ";
			res++;
		}
		cout<<nl;
	}
}
void p14(int n){
	char res = 'A';
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=i+1;j++){
			cout<<res<<" ";
			res++;
		}
		cout<<nl;
	}
}
void p15(int n){
	char res = 'A';
	for(int i = 1;i<=n;i++){
    	for(int j = 1;j<=n-i+1;j++){
    		cout<<res<<" ";
    		res++;
    	}
    	cout<<nl;
    }
}
void p16(int n){
	char res = 'A';
	for(int i = 1;i<=n;i++){
    	for(int j = 1;j<=i;j++){
			cout<<res<<" ";
		}
    	res++;
    	cout<<nl;
    }
}
void p17(int n){
	for(int i = 0;i<n;i++){
		char c = 'A';
		//space
		for(int j = 0;j<n-i-1;j++){
			cout<<" ";
		}
		//*
		int brkPoint = (2*i+1)/2;
		for(int j = 0;j<2*i+1;j++){
			cout<<c;
			if(j<=brkPoint){
				c++;
			}else{
				c--;
			}
		}
		//space
		for(int j = 0;j<n;j++){
			cout<<" ";
		}
		cout<<nl;
	}
}
void p18(int n){
	char c= 'E';
	for(int i = 0;i<n;i++){
    	for(char ch = 'E'-i;ch<='E';ch++){
    		cout<<ch<<" ";
    	}
    	cout<<nl;
    }
}

void p19_p1(int n){
	for(int i = 0;i<n;i++){
		//star
		for(int j = 0;j<n-i;j++){
			cout<<"*";
		}
		//space 
		for(int j = 0;j<=2*i-1;j++){
			cout<<" ";
		}
		//star
		for(int j = 0;j<n-i;j++){
			cout<<"*";
		}
		cout<<nl;

	}
}
void p19_p2(int n){
	for(int i = 0;i<n;i++){
		//star
		for(int j = 0;j<i+1;j++){
			cout<<"*";
		}
		//space 
		for(int j = 0;j<(2*n)-(i*2)-2;j++){
			cout<<" ";
		}
		//star
		for(int j = 0;j<i+1;j++){
			cout<<"*";
		}
		cout<<nl;

	}
}
void p19(int n){
	p19_p1(n);
	p19_p2(n);

}

void p20b(int n){
	for(int i = 0;i<n;i++){
		//star 
		for(int j = 1;j<=n-1-i;j++){
			cout<<"*";
		}
		//space
		for(int j = 1;j<=2*i+2;j++){
			cout<<" ";
		}
		//star 
		for(int j = 1;j<=n-1-i;j++){
			cout<<"*";
		}
		cout<<nl;
	}
}
void p20(int n){
	p19_p2(n);
	p20b(n);
}
void p21(int n){
	for(int i = 0;i<n;i++){
		if(i==0 || i==(n-1)){
			for(int j = 0;j<n;j++){
				cout<<"*";
			}
			cout<<nl;
		}else{
			for(int j = 0;j<n;j++){
				if(j==0 || j==n-1){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}
			cout<<nl;
		}
	}
}
void p21b(int n){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i==0 || i==n-1||j==0||j==n-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<nl;
	}
}
void p22(int n){
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i==0 || i==n-1||j==0||j==n-1){
				cout<<"4";
			}else{
				cout<<"3";
			}
		}
		cout<<nl;
	}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    p22(r);
    return 0;
}
