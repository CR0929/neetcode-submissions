class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
    int ans = 0;
        unordered_set<char>charSet(s.begin(),s.end());

        for(char c : charSet){
            int count = 0, l=0;
            for(int r=0;r<n;r++){
                if(s[r] == c) count++;

                while(r-l+1-count>k){
                    if(s[l] == c) {
                        count--;
                    }
                        l++;
                }
                ans = max(ans,r-l+1);
            }
        }
        return ans;
    }
};
