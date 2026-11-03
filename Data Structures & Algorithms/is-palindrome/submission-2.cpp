class Solution {
public:
    bool isPalindrome(string s) {
        string strs = "";

        for(char c:s){
            if(isalnum(c)){
                strs += tolower(c);
            }
        }
        return strs == string(strs.rbegin(),strs.rend());
    }
};
