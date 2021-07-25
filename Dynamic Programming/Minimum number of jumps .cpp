// using greedy approach with T.C : O(n)
int minJumps(int arr[], int n){
        int maxr = arr[0];
        int jump = 1;
        int step = arr[0];
        if (arr[0] == 0)
            return -1;
        else if (n == 1)
            return 0;
        else {
            for (int i = 1; i < n; i++) {
                if (i == n - 1) {
                    return jump;
                }
                maxr = max(arr[i] + i, maxr); // keep on updating range
                step--;
                if (step == 0) {
                    jump++;
                if (i >= maxr) //can't go further
                    return -1;
                step = maxr - i; //step count
                }
            }
        }
    }

// using dp approach with T.C : O(n^2)
int minJumps(int arr[], int n){
  int dp[n+1];
        for(int i=0; i<n; ++i){
            dp[i] = INT_MAX;
        }
        dp[0] = 0;
        for(int i=1; i<n; ++i){
            for(int j=0; j<i; ++j){
                if((j + arr[j] >= i) and dp[j] != INT_MAX){
                    if(dp[j] + 1 < dp[i]){
                        dp[i] = dp[j] + 1;
                    }    
                }
            }
        }
        if(dp[n-1] != INT_MAX)
            return dp[n-1];
        return -1;
}
