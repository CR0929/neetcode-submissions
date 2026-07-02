class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>>mp1;

        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp1[s].push_back(strs[i]);
        }

        for(auto s: mp1){
            res.push_back(s.second);
        }
    return res;
    }
};
