#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>m;
	    sort(a,a+n);
	    int min_diff = INT_MAX;
	    for(int i=0;i+m-1<n;i++){
	        int diff = a[i+m-1]-a[i];
	        min_diff=min(min_diff,diff);
	    }
	    cout<<min_diff<<endl;
	}
	return 0;
}
