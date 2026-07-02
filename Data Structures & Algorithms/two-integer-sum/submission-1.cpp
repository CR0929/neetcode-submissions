class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum = nums[i]+nums[j];

                if(sum == target){
                    return {i,j};
                }
            }
        }
    }
};
