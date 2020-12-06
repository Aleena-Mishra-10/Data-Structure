bool compare(struct val a,struct val b){
    return a.second < b.second;
}
/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{   
    sort(p,p+n,compare);
    int dp[n];
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(p[i].first>p[j].second){
            if(dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(dp[i]>res){
            res=dp[i];
        }
    }
    return res;
}
