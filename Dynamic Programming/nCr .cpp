int nCr(int n, int r){
        int dp[r+1] = {0};
        if(r>n)
            return 0;
        if(r>(n-r))
            r = n-r;
        int mod = 1e9+7;            
        dp[0] = 1;
        for(int i=1; i<=n; ++i){
            for(int j=min(r,i); j>=1; --j){
                dp[j] = (dp[j-1] + dp[j]) % mod;
            }
        }
        return dp[r];
    }
