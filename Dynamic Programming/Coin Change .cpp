long long int count( int coin[], int m, int n ){
       long long int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(long long int i=0;i<=m;i++){
            for(long long int j=0;j<=n;j++){
                if(i==0){
                    dp[i][j]=0;    
                } 
                if(j==0){
                    dp[i][j]=1;
                } 
            }
        }
        for(long long int i=1;i<=m;i++){
            for(long long int j=1;j<=n;j++){
                if(coin[i-1]<=j){
                    dp[i][j]=dp[i][j-coin[i-1]] + dp[i-1][j];
                } 
                else{
                    dp[i][j]=dp[i-1][j];
                } 
            }
        }
    return dp[m][n];
    }
