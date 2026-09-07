class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> mp;
        stack<int> st;

        for(int i = nums2.size()-1; i>=0 ; i--) {

            // remove element that cannot be answer
            while (!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            // if stack is empty, there is no greater element 
            if (st.empty()){
                mp[nums2[i]] = -1;
            }
            else {
                mp[nums2[i]] = st.top();
            }

            // Current element can be next greater for elements on left
            st.push(nums2[i]);
        }


        vector<int> ans;

        for(int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
