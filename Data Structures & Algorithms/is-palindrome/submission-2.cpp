class Solution {
   public:
    bool isPalindrome(string s) {
        string res;
        for (char c : s) {
            if (isalnum(c)) {
                res += c;
            }
        }

        transform(res.begin(), res.end(), res.begin(), ::toupper);
        int a = res.length() / 2;
        int i, j;
        if (res.length() % 2 == 0) {
            i = a-1;
            j = a;
        }
        if (res.length() % 2 == 1) {
            i = a-1;
            j = a+1;
        }
        while (i >= 0 && j<res.size()) {
            if (res[i] != res[j]) {
                return false;
            } else {
                i--;
                j++;
            }
        }
        return true;
    }
};
