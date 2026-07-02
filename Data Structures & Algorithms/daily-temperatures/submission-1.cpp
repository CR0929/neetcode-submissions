class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>res(n,0);

        stack<pair<int,int>>st; // {temp, index} [{30,0},{38,1},{30,2},{36,3},{35,4},{40,5},{28,6}]

        for(int i=0;i<n;i++){
            int t = temperatures[i];
            while(!st.empty() && t > st.top().first){
                auto pair = st.top();
                st.pop();
                res[pair.second] = i-pair.second;
            }
            st.push({t,i});
        }
        return res;
    }
};
