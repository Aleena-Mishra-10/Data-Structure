class Solution{
public:
    int maximumPath(int N, vector<vector<int>> m)
    { int n=N;
    int dp[n][n];
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
    { if(i==0)
    {dp[i][j]= m[i][j];}
    else if(j>=1 && j+1<n)
    dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j+1],dp[i-1][j])) + m[i][j];
    else if(j==0 )
        dp[i][j]=max(dp[i-1][j+1],dp[i-1][j]) + m[i][j];
    else if(j==n-1 )
        dp[i][j]=max(dp[i-1][j-1],dp[i-1][j]) + m[i][j];
    }}
    //to find MAximuum among n-1 th row
    int k=0;
    for(int i=0;i<n;i++)
    {if(k<dp[n-1][i])
    k=dp[n-1][i];}
    return k;}
};
