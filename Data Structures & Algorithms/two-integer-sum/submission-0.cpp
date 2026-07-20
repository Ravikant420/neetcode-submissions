class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i=0;i<nums.size()-1;i++){
            int require = target - nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(require == nums[j]){
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
    }
};
