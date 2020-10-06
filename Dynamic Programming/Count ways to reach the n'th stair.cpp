long long countWays(int m){
    long long dp[m+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=m;i++){
        dp[i] = (dp[i-1]+dp[i-2]) % 1000000007;
    }
    return dp[m];
}
