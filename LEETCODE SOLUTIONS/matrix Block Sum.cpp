class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                dp[i][j] = mat[i-1][j-1]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int r1 = max(0,i-K);
                int c1 = max(0,j-K);
                int r2 = min(m-1,i+K);
                int c2 = min(n-1,j+K);
                ans[i][j] = dp[r2+1][c2+1]-dp[r2+1][c1]-dp[r1][c2+1]+dp[r1][c1];
            }
        }
        return ans;
    }
};
