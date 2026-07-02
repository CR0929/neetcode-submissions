class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int>psi(n,-1);
        vector<int>nsi(n,n);

        stack<int>st1;
        stack<int>st2;

        for(int i=0;i<n;i++){

            while(!st1.empty() && heights[i] <= heights[st1.top()]){
                st1.pop();
            }

            if(!st1.empty()) psi[i] = st1.top();

            st1.push(i);
        }

        for(int i=0;i<n;i++){

            while(!st2.empty() && heights[i] < heights[st2.top()]){
                nsi[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }

        int maxArea = 0;

        for(int i=0;i<n;i++){
            int width = nsi[i]-psi[i]-1;
            maxArea = max(maxArea, heights[i]*width);
        }
        return maxArea;
    }
};
