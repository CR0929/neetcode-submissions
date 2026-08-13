class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int>s1;


        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            s1[t[i]]--;
        }

        for(auto mp:s1){
            if(mp.second != 0){
                return false ;
            }
        }

        return true;
    }
};
