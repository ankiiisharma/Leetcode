// User function Template for C++

class Solution{
    
private:
int dx[3] = { -1, 0, 1 };
int dy[3] = { -1, -1, -1 };
 
bool isValid(int x, int y, int n, int m)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
        return true;
    return false;
}

public:
 
int maxGold(int n, int m, vector<vector<int> > M)
{
    int dp[n][m];
 
    // initialisation of first col
    for (int i = 0; i < n; i++)
        dp[i][0] = M[i][0];
 
    for (int j = 1; j < m; j++) {
        for (int i = 0; i < n; i++) {
            int mx = INT_MIN;
            for (int k = 0; k < 3; k++) {
                int x = i + dx[k];
                int y = j + dy[k];
 
                if (isValid(x, y, n, m))
                    mx = max(mx, dp[x][y] + M[i][j]);
            }
            dp[i][j] = mx;
        }
    }
 
    int ans = INT_MIN;
 
    for (int i = 0; i < n; i++) {
        ans = max(ans, dp[i][m - 1]);
    }
    return ans;
}
};