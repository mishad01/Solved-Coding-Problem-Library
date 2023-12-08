#include<bits/stdc++.h>
using namespace std;

int main(){
    int at[10], bt[10], rt[10];
    int ct; // Variable to store the completion time of a process.
    int i;  // Loop variable.
    int smallest; // Index of the process with the smallest remaining burst time.
    int remain = 0; // Number of processes remaining to be executed.
    int n;  // Total number of processes.
    int time = 0;  // Current time in the simulation.
    int sum_wait = 0; // Sum of waiting times for all processes.
    int sum_turnaround = 0; // Sum of turnaround times for all processes. 

    // cout << "Enter Number of Process" << endl;
    // cin >> n;

    for(i = 0; i < n; i++){
        cin >> at[i];
        cin >> bt[i];
        rt[i] = bt[i];
    }

    printf("\n\nProcess\t|Turnaround Time| Waiting Time\n\n");

    rt[99] = 9999;
    
    for(time = 0; remain != n; time++){
        smallest = 99;
        for (int j = 0; j < n; j++) {
            if(at[j] <= time && rt[j] < rt[smallest] && rt[j] > 0){
                smallest = j;
            }
        }

        rt[smallest]--;
        
        if(rt[smallest] == 0){
            remain++;
            ct = time + 1;
            
            printf("\nP[%d]\t|\t%d\t|\t%d", smallest + 1, ct - at[smallest], ct - bt[smallest] - at[smallest]);

            sum_wait += ct - bt[smallest] - at[smallest];
            sum_turnaround += ct - at[smallest];
        }
    }
}
