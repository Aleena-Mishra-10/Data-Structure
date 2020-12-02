#include<bits/stdc++.h>
using namespace std;
void find()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    sort(arr,arr+n);
    int dp[n]={0};
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]<k)
        {
            if(i<2)
            dp[i]=arr[i]+arr[i-1];
            else
            dp[i]=max(dp[i],dp[i-2]+arr[i]+arr[i-1]);
        }
        else
        dp[i]=dp[i-1];
    }
    cout<<dp[n-1]<<endl;

}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	find();
	}
	return 0;
}
