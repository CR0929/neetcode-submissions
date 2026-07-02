class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());

        int longest = 0;

        for(int num: mp){

            if(mp.find(num-1) == mp.end()){
                int currentNum = num;
                int length = 1;
                while(mp.find(currentNum +1) != mp.end()){
                    currentNum++;
                    length++;
                }
                longest = max(longest,length);
            }

        }
        return longest;

    }
};
