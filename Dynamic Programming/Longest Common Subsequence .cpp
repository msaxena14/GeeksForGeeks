class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1002][1002]; 
    
    int solve(int x ,int y , string & s1, string & s2) {
        if(x == 0 || y == 0) {
            return 0; 
        }
        if(dp[x][y] != -1) {
            return dp[x][y]; 
        }
        if(s1[x-1] == s2[y-1]) {
            return dp[x][y] = 1 + solve(x-1,y-1,s1, s2); 
        }
        return dp[x][y] = max(solve(x-1,y, s1, s2), solve(x, y-1, s1, s2)); 
    }
    int lcs(int x, int y, string s1, string s2){
        memset(dp,-1,sizeof(dp));
        int ans = solve(x,y,s1,s2);
        return ans;
    }
};
