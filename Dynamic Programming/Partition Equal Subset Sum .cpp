//Memoization

bool findsum(int arr[], int n, int sum, vector<vector<int>> &dp){
        if(sum==0)
            return true;
        if(n==0 and sum!=0)
            return false;
        if(dp[n][sum] != -1)
            return dp[n][sum];
        if(arr[n-1] > sum)
            return dp[n][sum] = findsum(arr,n-1,sum,dp);
        return dp[n][sum] = findsum(arr,n-1,sum,dp) or findsum(arr,n-1,sum - arr[n-1],dp);
    }

    int equalPartition(int N, int arr[]){
        int sum = 0;
        for(int i=0; i<N; ++i){
            sum += arr[i];
        }
        if(sum&1)
            return 0;
        vector<vector<int>> dp(N+1, vector<int>(((sum/2)+1),-1)); 
        //memset(dp,-1,sizeof(dp));
        return findsum(arr,N-1,sum/2,dp);
    }
    
    //Recursive approach
    bool findsum(int arr[], int n, int sum, vector<vector<int>> &dp){
        if(sum==0)
            return true;
        if(n==0 and sum!=0)
            return false;
        if(arr[n-1] > sum)
            return findsum(arr,n-1,sum);
        return findsum(arr,n-1,sum,) or findsum(arr,n-1,sum - arr[n-1]);
    }

    int equalPartition(int N, int arr[]){
        int sum = 0;
        for(int i=0; i<N; ++i){
            sum += arr[i];
        }
        if(sum&1)
            return 0;
        return findsum(arr,N-1,sum/2);
    }
