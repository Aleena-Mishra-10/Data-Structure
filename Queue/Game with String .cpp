#include<bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,k,i,j;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cin>>k;
	    priority_queue<int>q;
	    int arr[26]={0};
	    for(i=0;i<s.length();i++)
	        arr[s[i]-'a']++;
	     
	     for(i=0;i<26;i++)
	     {
	         q.push(arr[i]);
	     }
	     
	     while(k--)
	     {
	         int x=q.top();
	         x--;
	         q.pop();
	         q.push(x);
	     }
	     int sum=0;
	     while(!q.empty())
	     {
	         sum+=q.top()*q.top();
	         q.pop();
	     }
	     cout<<sum<<"\n";
	}
	return 0;
}
