#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x,y,z,j;
	    cin>>n;
	    cin>>x>>y>>z;
	    int a[3];
	    a[0]=x;
	    a[1]=y;
	    a[2]=z;
	    int dp[3][n+1];
	    for(i=0;i<=3;i++){
	        for(j=0;j<=n;j++){
	            if(j==0){
	                dp[i][j]=0;
	            }
	            else if(i==0){
	                if(j%a[i]==0){
	                    dp[i][j]=j/a[i];
	                }
	                else{
	                    dp[i][j]=0;
	                }
	            }
	            else{
	                if(a[i]>j){
	                    dp[i][j]=dp[i-1][j];
	                }
	                else{
	                    if(dp[i-1][j]==0&&dp[i][j-a[i]]==0&&j-a[i]!=0){
	                        dp[i][j]=0;
	                    }
	                    else{
	                        dp[i][j]=max(dp[i-1][j],dp[i][j-a[i]]+1);
	                    }
	                }
	            }
	        }
	    }
	    cout<<dp[2][j-1]<<endl;
	}
	return 0;
}
