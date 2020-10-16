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
	    int j,k=0;
	    for(j=0;j<n;j++){
	        if(a[j]==0){
	            if(j==k){
	                
	                k++;
	            }
	            else{
	                swap(a[j],a[k]);
	                k++;
	            }
	        }
	    }
	    int l;
	    
	    for(l=k;l<n;l++){
	        if(a[l]==1){
	            if(l==k){
	                k++;
	            }
	            else{
	                swap(a[l],a[k]);
	                k++;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
