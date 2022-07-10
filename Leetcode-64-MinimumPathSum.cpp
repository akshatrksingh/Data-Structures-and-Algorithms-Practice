class Solution 
{
    public:
        int minPathSum(vector<vector<int>> &grid) 
        {
            int m = grid.size();
            int n = grid[0].size();
            int dp[m][n];
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(i == 0 && j == 0)
                    {
                        dp[i][j] = grid[i][j];
                    }
                    else if(i == 0)
                    {
                        dp[i][j] = grid[i][j]+dp[i][j-1];
                    }
                    else if(j == 0)
                    {
                        dp[i][j] = grid[i][j]+dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = INT_MAX;
                    }
                }
            }
            for(int i = 1; i < m; i++)
            {
                for(int j = 1; j < n; j++)
                {
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1])+grid[i][j];
                }
            }
            return dp[m-1][n-1];
        }
};
