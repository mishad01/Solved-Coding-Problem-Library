#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void implimentionFirstFit(int process[],int ps,int block[],int bs){
	int alloc[ps];
	int occup[bs];

	for(int i = 0;i<ps;i++){
		alloc[i]=-1;
	}

	for(int i = 0;i<ps;i++){
		for(int j = 0;j<bs;j++){
			if(process[i]<=block[j]){
				alloc[i]=j;
				block[j]-=process[i];
				break;
			}
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < ps; i++)
    {
        printf("%d \t\t\t %d \t\t\t", i+1, process[i]);
        if (alloc[i] != -1)
            printf("%d\n",alloc[i] + 1);
        else
            printf("Not Allocated\n");
    }

}
int main() {
	int processSize[]={20,60,70,40};
	int blockSize[]={100,50,30,120,35};
	int ps = sizeof(processSize)/sizeof(processSize[0]);
	int bs = sizeof(blockSize)/sizeof(blockSize[0]);

	implimentionFirstFit(processSize,ps,blockSize,bs);

}