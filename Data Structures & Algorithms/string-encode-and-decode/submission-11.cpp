class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const auto& s : strs){
            res.append(to_string(s.length()));
            res.push_back('#');
            res.append(s);
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int j=0;
        for(int i=0; i< s.length(); i++){
            if(s[i]=='#'){
                int length = stoi(s.substr(j,i-j));
                res.push_back(s.substr(i+1,length));
                j = i+length +1;
                i = i+length;
            }
        }
        return res;
    }
};
