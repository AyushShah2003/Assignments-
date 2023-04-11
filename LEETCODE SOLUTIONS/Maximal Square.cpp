class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0) return 0;
        int n = matrix[0].size();
        
        int maxslen = 0;
        vector<int> dp(n+1, 0);
        
        int prev = 0; //top-left
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                /*
                dp[j] of previous row
                it will be used as 'prev' in next j,
                at that time, it means the dp value of top-left corner
                */
                int tmp = dp[j];
                if(matrix[i-1][j-1] == '0'){
                    dp[j] = 0;
                }else{
                   
                    dp[j] = min({dp[j], dp[j-1], prev}) + 1;
                    maxslen = max(maxslen, dp[j]);
                }
                
                prev = tmp;
            }
        }
        
        return maxslen * maxslen;
    }
};
