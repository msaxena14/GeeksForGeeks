//recursive approach with space complexity O(n) and Time complexity O(n)

int mod = 1000000007;
    long long int solve(int n, vector<long long int> &dp){
        if(n<=2)
            return n;
        if(dp[n] != -1)
            return dp[n];
        long long int a = (((n-1)%mod) * solve(n-2,dp)%mod)%mod;
        long long int b = solve(n-1,dp)%mod;
        return dp[n] = a + b;
    }
    
    int countFriendsPairings(int n) { 
        vector<long long int> dp(n+1,-1);
        return solve(n,dp)%mod;
    }

//space optimised
int dp[10000];
    int countFriendsPairings(int n){
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        int mod = 1000000007;
        for(long long int i=3;i<=n;i++){
            dp[i] = ((dp[i-1])%mod+(i-1)%mod*(dp[i-2])%mod)%mod;
        }
        return dp[n];
    }

//further optimising dp
long mod = 10^9+7;
    
    int countFriendsPairings(int n) { 
        if(n <= 2)
            return n;
        int p = 1e9 + 7;
        long long a = 1, b = 2, c;
        for(int i = 3; i <= n; i++) {
            c = (b + a * (i - 1)) % p;
            a = b;
            b = c;
        }
        return c;
    }

//replace b = dp[i-1] and a = dp[i-2]
