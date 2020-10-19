#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    arr[n]=0;
	    stack<int>st;
	    int i=0; 
	    int maxarea=-1;int area=0;
	    while(i<n+1)
	    {
	        if(st.empty() || arr[i]>=arr[st.top()])
	        {
	            st.push(i++);
	        }
	        else
	        {
	            int tp=st.top();st.pop();
	            area=arr[tp] * (st.empty() ? i : i-st.top()-1);
	            if(maxarea<area)
    	        {
    	            maxarea=area;
    	        }
	        }
	    }
	    cout<<maxarea<<'\n';
	}
	return 0;
}
