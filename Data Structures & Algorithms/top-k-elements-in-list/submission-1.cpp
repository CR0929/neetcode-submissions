class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp1;
        priority_queue<
    pair<int,int>, 
    vector<pair<int,int>>, 
    greater<pair<int,int>> > pq;
        vector<int>res;

        for(int i=0;i<nums.size();i++){
            mp1[nums[i]]++;
        }

        for(auto &mp : mp1){
            pq.push({mp.second,mp.first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        for(int i=0;i<k;i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
