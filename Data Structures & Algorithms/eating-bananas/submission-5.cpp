class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi, piles[i]);
        }

        int left = 1, right = maxi;

        while(left<right){
            int mid = left + (right-left)/2;

            if(canEat(piles,h,mid)){
                right = mid;
            } else {
                left = mid+1;
            }
        }

        return left;
    }

    bool canEat(vector<int>& piles, int h,int mid){
        long long hours = 0;

        for(int i=0;i<piles.size();i++){
            hours += ceil((double)piles[i]/(double)mid);
        }
        if(hours<=h){
            return true;
        } else return false;
    }
};
