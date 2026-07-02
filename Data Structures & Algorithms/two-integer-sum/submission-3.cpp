class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        int n = nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i]) != mp.end()){
                return {mp[target-nums[i]],i};
            }
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = i;
            }
            
        }
        return {-1,-1};
    }
};
