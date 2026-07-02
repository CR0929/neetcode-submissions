class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>res(n,0);

        stack<int>st; // {temp, index} [{30,0},{38,1},{30,2},{36,3},{35,4},{40,5},{28,6}]

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                int idx = st.top(); st.pop();       // ✅ pop it
                res[idx] = i - idx;        
            }
            st.push(i);
        }
        return res;
    }
};
