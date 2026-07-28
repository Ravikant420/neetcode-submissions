class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());

        int m = s1.length();

        for(int i=0; i< s2.length() - m +1 ; i++ ){
            string subStr = s2.substr(i,m);

            sort(subStr.begin(), subStr.end());
            if(subStr == s1){
                return true;
            }
        }
        return false;
    }
};
