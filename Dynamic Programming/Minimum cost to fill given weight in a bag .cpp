int dp[1001][1001];
	
	int solve(int cost[], int N, int W){
	    if(N == -1 and W == 0)
	        return 0;
	    if(N == -1)
	        return 1e9;
	    if(W == 0)
	        return 0;
	        
	    if(dp[N][W] != -1)
	        return dp[N][W];
	        
	    if((N+1) > W or cost[N] == -1)
	        return dp[N][W] = solve(cost,N-1,W);
	        
	    int a = solve(cost,N-1,W);
	    int b = cost[N] + solve(cost,N,W-(N+1));
	    
	    return dp[N][W] = min(a,b);
	}
	int minimumCost(int cost[], int N, int W) { 
        memset(dp,-1,sizeof(dp));
        int ans = solve(cost,N-1,W);
        if(ans >=1e9)
            return -1;
        return ans;
	}
