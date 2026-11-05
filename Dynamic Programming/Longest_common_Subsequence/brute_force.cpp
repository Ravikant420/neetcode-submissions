class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int a = text1.length();
        int b = text2.length();

        vector<vector<int>> arr (a+1, vector<int> (b+1, 0));

        for(int i= 1; i<= a; i++){
            for(int j =1; j<= b ; j++){
                if(text1[i-1] == text2[j-1]){
                    arr[i][j] = 1 + arr[i-1][j-1];
                }
                else{
                    arr[i][j] = max(arr[i][j-1], arr[i-1][j]);
                }
            }
        }
        return arr[a][b];
    }
};
