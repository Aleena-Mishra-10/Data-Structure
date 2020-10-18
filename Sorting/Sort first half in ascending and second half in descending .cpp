#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }

	    sort(a,a+n);
	    for(int i=0;i<n/2;i++){
	        cout<<a[i]<<" ";
	    }
	    for(int i=n-1;i>=n/2;i--){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
