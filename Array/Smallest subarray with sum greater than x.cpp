#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }

	    int end,sum=0;
	    int min_len=INT_MAX;
	    int start=0;
	    for(end=0;end<n;end++){
	        sum=sum+a[end];
	        while(sum>x&&start<=end){
	            min_len=min(min_len,(end-start)+1);
	            sum=sum-a[start++];
	        }
	    }
	    cout<<min_len<<endl;
	}
	return 0;
}
