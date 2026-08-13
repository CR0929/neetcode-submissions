class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        if(strs.empty() || strs.size() == 1){ 
            res.push_back(strs);
            return res;
        }
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }

        for(auto s:mp){
            res.push_back(s.second);
        }
        return res;
    }
};
