// O(n^2) approach
int longestSubsequence(int N, int A[]){
  int res = 0;
  int dp[N] = {0};
  for(int i = 0; i < N; i++){
    dp[i] = 1;
    for(int j = 0; j < i; j++){
      if(abs(A[j] - A[i]) == 1){
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    res = max(res, dp[i]);
  }
  return res;
}
// O(n) approach
int longestSubsequence(int N, int arr[]){
        unordered_map<int,int> ump;
        int ans = 0;
        for(int i=0; i<N; ++i){
            int l = 0;
            if(ump[arr[i] - 1])
                l = ump[arr[i] - 1];
            if(ump[arr[i] + 1] and ump[arr[i] + 1] > l)
                l = ump[arr[i] + 1];
            ump[arr[i]] = l + 1;
            ans = max(ans, ump[arr[i]]);
        }
        return ans;
    }
