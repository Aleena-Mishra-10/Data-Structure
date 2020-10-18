#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int v;
	        cin>>v;
	        a.push_back(v);
	    }
	    int k,l;
	    for(k=n-2;k>=0;k--){
	        if(a[k]<a[k+1]){
	            break;
	        }
	    }
	    if(k<0){
	        reverse(a.begin(),a.end());
	    }
	    else{
	        for(l=n-1;l>k;l--){
	            if(a[l]>a[k]){
	                break;
	            }
	        }
	        swap(a[k],a[l]);
	        reverse(a.begin()+k+1,a.end());
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
