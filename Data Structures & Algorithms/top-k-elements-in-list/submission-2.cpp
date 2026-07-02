class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        priority_queue<pair<int,int>>pq;
        vector<int>res;

        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        for(auto &mp : freq){
            pq.push({mp.second,mp.first});
        }

        for(int i=0;i<k;i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
