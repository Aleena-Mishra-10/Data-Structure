#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void steps(int a[],int n)
{ 
  int dp[n];
  dp[0]=0;


for(int i=1;i<n;i++)
{   dp[i]=10000;
     for(int j=0;j<i;j++)
     {
         if(j+a[j]>=i)
         dp[i]=min(dp[i],dp[j]+1);
     }
} 

if(dp[n-1]==10000)
cout<<-1;
else
cout<<dp[n-1];
}


int main() { int t; cin>>t;
while(t--)
{ 
    int n; cin>>n;
   int a[n];

for(int i=0;i<n;i++)
cin>>a[i];

steps(a,n);
cout<<endl;   
}
 return 0;
}
