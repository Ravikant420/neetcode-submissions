class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int num : nums){
            mp[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for(const auto& pair : mp){
            int num = pair.first;
            int count = pair.second;

            buckets[count].push_back(num);
        }

        vector<int> result;
        for(int i=buckets.size()-1; i>=0;i--){
            for(int num : buckets[i]) {
                result.push_back(num);
                if(result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};