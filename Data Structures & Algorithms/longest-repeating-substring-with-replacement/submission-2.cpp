class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int res = 0;

        // replace each character to make to form 
        // the string of each character
        for(char c = 'A'; c<= 'Z'; c++){
            int l = 0;
            int r = 0;
            int cnt = 0;

            // sliding window from l to r
            while( r < n){
                if(s[r] == c){
                    r++;
                }

                // no. of different character we can able to replace
                else if (cnt <k){
                    cnt++;
                    r++;

                // if character are not replaceable then 
                // shrink the window from the left
                }
                else if (s[l] == c){
                    l++;
                }
                else {
                    l++;
                    cnt--;
                }

                // update the maximum length of substring
                res = max(res, r-l);
            }
        }
        return res;
    }
};
