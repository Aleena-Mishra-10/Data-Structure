#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int max_sum = INT_MIN; 
	    int n;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    int I[n],D[n];
	    for(int j=0;j<n;j++){
	        I[j]=a[j];
	        D[j]=a[j];
	    }
	    for(int j=1;j<n;j++){
	        for(int k=0;k<j;k++){
	            if(a[j]>a[k]&&I[j]<I[k]+a[j]){
	                I[j]=I[k]+a[j];
	            }
	        }
	    }
	    for(int j=n-2;j>=0;j--){
	        for(int k=n-1;k>j;k--){
	            if(a[j]>a[k]&&D[j]<D[k]+a[j]){
	                D[j]=D[k]+a[j];
	            }
	        }
	    }
	    for (int j = 0; j < n; j++) {
        max_sum = max(max_sum, (D[j] + I[j] - a[j])); 
	    }
	    cout<<max_sum<<endl;
	}
	return 0;
}
