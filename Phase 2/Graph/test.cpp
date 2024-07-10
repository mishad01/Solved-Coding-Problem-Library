class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        priority_queue<pair<int,int>>pq;
        int count = 0;
        for(auto x : bt){
            pq.push({x[1],x[0]});
        }
        int units = 0;
        while(!pq.empty() && count<=ts){
            if(count+pq.top().second<ts){
                count +=pq.top().second;
                units +=pq.top().first * pq.top().second;
                pq.pop();
            }else{
                int quantity = ts-count;
                count += quantity;
                units += quantity * pq.top().first;  
                pq.pop();
            }
        }
        return units;
    }
};