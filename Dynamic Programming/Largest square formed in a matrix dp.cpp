#include<bits/stdc++.h>
using namespace std;

int Min(int x, int y, int z){
    return min(min(x,y),z);
}

int MaxSquare(vector<vector<int> > M, int n, int m){
    int dp[n][m];
    for(int i=0; i<m; i++)
        dp[0][i] = M[0][i];
    for(int i=0; i<n; i++)
        dp[i][0] =M[i][0];
        
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(M[i][j]==1)
                dp[i][j] = Min(dp[i-1][j], dp[i-1][j-1], dp[i][j-1]) + 1;
            else
                dp[i][j] = 0;
        }
    }
    
    
    int maxIndex=0, maxI=0, maxJ=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(dp[i][j] > maxIndex)
                maxIndex = dp[i][j];
        }
    }
    return maxIndex;
    /*
    //Printing
    for(int i = maxI; i>maxI-maxIndex; i--)
    {
        for(int j = maxJ; i>maxJ-maxIndex; j--)
        {
            cout<<M[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    */
}

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;    //n=row m=column
	    cin >> n >> m;
	    vector<vector<int>> M( n , vector<int> (m, 0));
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            cin >> M[i][j];
	        }
	    }
	    cout<<MaxSquare(M, n, m)<<endl;
	}
	return 0;
}
