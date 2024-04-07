class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>v;
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto x : mp){
            pq.push(make_pair(x.second, x.first));
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            pair<int,int>temp = pq.top();
            pq.pop();
            v.push_back(temp.second);
        }
        return v;
    }
};