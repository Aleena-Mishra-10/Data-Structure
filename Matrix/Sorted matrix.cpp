#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int *a;
	    a=(int *)malloc(sizeof(int)*(n*n));
	    for(int i=0;i<n*n;i++){
	            cin>>a[i];
	    }
	    sort(a,a+(n*n));
	    for(int i=0;i<n*n;i++){
	            cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
