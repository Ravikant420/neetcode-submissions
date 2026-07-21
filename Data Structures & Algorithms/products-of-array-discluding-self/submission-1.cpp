class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i< nums.size(); i++){
            vector<int> r = nums;
            r[i] = 1;
            res.push_back(accumulate(r.begin(),r.end(), 1, multiplies<int>()));
        }
        return res;
    }
};
