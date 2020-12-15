unordered_map<string ,int> dp;

int find(string s,vector<string> &b){
    int n=s.size();
    if(n==0) return 1;
    if(dp[s]!=0) return dp[s];
    for(int i=0;i<=n;i++){
        int f=0;
        string ss=s.substr(0,i);
        for(int j=0;j<b.size();j++){
            if(ss.compare(b[j])==0){
                f=1;
                break;
            }
        }
        if(f==1 and find(s.substr(i,n-i),b)==1) return dp[s] =1;
    }
    return dp[s]=-1;
}
int wordBreak(string A, vector<string> &B) {
    int x=find(A,B);
    if(x==1) return 1;
    else return 0;
}
