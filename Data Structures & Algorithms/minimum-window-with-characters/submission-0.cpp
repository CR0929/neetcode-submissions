class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";

        unordered_map<char,int>tmap, window;

        for(int i=0;i<t.size();i++){
            tmap[t[i]]++;
        }

        int resLen = INT_MAX;
        int need = tmap.size();
        int have = 0;
        pair<int,int> res = {-1,-1};
        int l =0;
        for(int r=0;r<s.size();r++){
            char c = s[r];
            window[c]++;

            if(tmap.count(c) && window[c] == tmap[c]){
                have++;
            }

            while(have == need){
                if((r-l+1) < resLen){
                    resLen = r-l+1;
                    res = {l,r};
                }

                window[s[l]]--;
                if(tmap.count(s[l]) && window[s[l]] < tmap[s[l]]){
                    have--;
                }
                l++;
            }
        }
            return resLen == INT_MAX ? "" : s.substr(res.first,resLen);
    }
};
