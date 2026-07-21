class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const auto& s : strs){
            // add length
            res.append(to_string(s.length()));
            // add #
            res.push_back('#');
            // add string
            res.append(s);
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int j=0;
        for(int i=0; i< s.length(); i++){
            if(s[i]=='#'){
                // find length of string, the string may be of 2 digit
                int length = stoi(s.substr(j,i-j));
                // based on length push_back the string in res
                res.push_back(s.substr(i+1,length));
                // update the i and j
                j = i+length +1;
                i = i+length;
            }
        }
        return res;
    }
};
