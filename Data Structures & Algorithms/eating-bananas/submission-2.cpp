class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = 0;

        for(int i=0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        
        int left = 1, right = maxi;


        while(left<right){
            int mid = left + (right-left)/2;

            if(canFinish(piles,mid,h)){
                right = mid;
            } else {
                left = mid+1;
            }
            
        }
        return left;
    }

bool canFinish(vector<int>& piles, int k, int h) {

    long long hours = 0;

    for(int pile : piles){
        hours += (pile + k - 1) / k;
    }

    return hours <= h;
}
};
