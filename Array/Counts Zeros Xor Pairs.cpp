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
	    int ans=0,c=1;
	    for(int i=1;i<n;i++){
	        if(a[i]==a[i-1]){
	            c+=1;
	        }
	        else{
	            ans=ans+(c*(c-1))/2;
	            c=1;
	        }
	    }
	    cout<<ans+(c*(c-1))/2<<endl;
	}
	return 0;
}
