#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int dp[n+1][n+1];
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0||j==0){
	                dp[i][j]=0;
	            }
	        }
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n;j++){
	            if(str[i-1]==str[j-1]&&i!=j){
	                dp[i][j]=1+dp[i-1][j-1];
	            }
	            else{
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            }
	        }
	    }
	    cout<<dp[n][n]<<endl;
	}
	return 0;
}
