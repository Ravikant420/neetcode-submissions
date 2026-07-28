// Brute Force
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    // sort s1 for compare easily by sorting  
    sort(s1.begin(), s1.end());
    int m = s1.length();
    for(int i = 0; i< s2.length(); i++) {
        for(int j =i; j < s2.length(); j++ ) {

            // extract substring for compare
            string subStr = s2.substr(i, m);

            sort(subStr.begin(), subStr.end());

            if(subStr == s1){
                return true;
            }
        }
    }  
    return false;
    }
};
