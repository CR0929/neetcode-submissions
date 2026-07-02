class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int>res(n);

        vector<int>prefixP(n);
        vector<int>suffixP(n);
        prefixP[0] = 1;
        suffixP[n-1] = 1;

        for(int i=1;i<n;i++){
            prefixP[i] = nums[i-1]*prefixP[i-1];
        }

         for(int i=n-2;i>=0;i--){
            suffixP[i] = nums[i+1]*suffixP[i+1];
        }

        for(int i=0;i<n;i++){
            res[i] = prefixP[i]*suffixP[i];
        }
    return res;
    }
};
