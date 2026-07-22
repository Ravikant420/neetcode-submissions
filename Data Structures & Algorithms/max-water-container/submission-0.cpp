class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l =0;
        int r = heights.size()-1;
        int maxi =0;

        while(l<r){
            
            int capacity = min(heights[l], heights[r]) *(r-l);

            maxi = max (maxi, capacity);

            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};
