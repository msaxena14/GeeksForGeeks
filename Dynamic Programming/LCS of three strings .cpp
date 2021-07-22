// using recursive approach i.e. Memoization
int dp[1000][1000][1000]; // take size of dp as per given constraints
int solve(int n1, int n2, int n3){
  
  if( n1 == -1 or n2 == -1 or n3 == -1)
      return 0;
  
  else if(dp[n1][n2][n3] != -1)
    return dp[n1][n2][n3];
  
  else if(A[n1-1] == B[n2-1] and B[n2-1] == C[n3-1])
    return dp[n1][n2][n3] = 1 + (solve(n1-1,n2-1,n3-1);
  
  return dp[n1][n2][n3] = max(solve(n1-1,n2,n3) , max(solve(n1,n2-1,n3) , solve(n1.n2.n3-1)));
                                
 }
                                 
 int lcsof3(int n1, int n2, int n3, string A, string B, string C){
   memset(dp,-1,sizeof(dp));
   return solve(n1,n2,n3);
 }
                                 
 // using tabular dp
 
 int lcsof3(string A, string B, string C, int n1, int n2, int n3){
   int dp[n1+1][n2+1][n3+1];
   
   for(int i=0;i<=n1; ++i){
     for(int j=0; j<=n2; ++j){
       for(int k=0; k<=n3; ++k){
         if(i == 0 or j == 0 or k == 0){
           dp[i][j][k] = 0;
         }
         else if(A[i-1] == B[j-1] and B[j-1] == C[k-1]){
           dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
         }
         else{
           dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
         }
       }
     }
   }
   return dp[n1][n2][n3];
 }
