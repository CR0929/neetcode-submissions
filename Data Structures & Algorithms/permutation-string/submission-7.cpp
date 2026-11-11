class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        unordered_map<char,int>mp2;
        int l=0;
        for(int r=0;r<s2.size();r++){
            mp2[s2[r]]++;

            if(r-l+1>s1.size()){
               if (--mp2[s2[l]] == 0) mp2.erase(s2[l]);
                l++;
            }
            if(mp1 == mp2) return true;
        }
        return false;
    }
};
