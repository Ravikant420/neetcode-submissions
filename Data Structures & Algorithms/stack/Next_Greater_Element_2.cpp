class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int>st;

        for(int i = 2*n -1; i >= 0; i--){
            int curr = nums[ i % n  ];

            // remove element that are not greater than curr
            while(!st.empty() && st.top() <= curr){
                st.pop();
            }

            // Only first n positions need answers

            if(i < n) {
                if(!st.empty()){
                    ans[i] = st.top();
                }
            }
            st.push(curr);
        }
        return ans;
    }
};
