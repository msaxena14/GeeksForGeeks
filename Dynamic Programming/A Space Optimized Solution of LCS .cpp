#include<bits/stdc++.h>

using namespace std;

int lcs(string &X, string &Y){
  int m = X.length();
  int n = Y.length();
  int dp[2][n+1];
  
  bool bi;
  for(int i=0; i<=m; ++i){
    bi = 1 & i;
    for(int j=0; j<=n; ++j){
      if(i == 0 or j == 0)
        dp[bi][j] = 0;
      else if(X[i-1] == Y[j-1])
         dp[bi][j] = 1 + dp[1-bi][j-1];
      else
        dp[bi][j] = max(dp[1-bi][j], dp[bi][j-1]);
    }
  }
  return dp[bi][n];
}
  
  
