class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;

        for(int i=0;i<s1.length();i++){
            mp1[s1[i]]++;
        }

        int need = mp1.size();
        for(int i=0;i<s2.length();i++){
            unordered_map<char,int>mp2;
            int curr = 0;
            for(int j=i;j<s2.length();j++){
                char c = s2[j];
                mp2[s2[j]]++;

                if(mp1[c] < mp2[c]){
                    break;
                }
                if(mp1[c] == mp2[c]){
                    curr++;
                }

                if(curr == need){
                    return true;
                }
            }
        }
    return false;
        
    }
};
