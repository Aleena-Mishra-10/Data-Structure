// Returns nCr % p 
int nCrModp(int n, int r) 
{ 
  
  long long dp[n+1][r+1];
  for(int i=0;i<=n;i++){
      dp[i][0]=1;
  }
  for(int i=1;i<=r;i++){
      dp[0][i]=0;
  }
  for(int i=1;i<=n;i++){
      for(int j=1;j<=r;j++){
          dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%p;
      }
  }
  return dp[n][r];
  
} 
