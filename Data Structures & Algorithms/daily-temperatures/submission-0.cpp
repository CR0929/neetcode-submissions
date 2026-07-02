class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res;
        int n = temperatures.size();
        
        for(int i=0;i<n;i++){
            int tmp = temperatures[i];
            for(int j=i;j<n;j++){
                if(temperatures[j]> temperatures[i]){
                    res.push_back(j-i);
                    break;
                } else if(j==n-1){
                    res.push_back(0);
                }
               
            }
            
        }
        return res;
    }
};
