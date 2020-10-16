#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m;
	    cin>>n>>m;
	    int a[n+m];
	    for(int i=0;i<n+m;i++){
	        cin>>a[i];
	    }

	   sort(a,a+n+m);
	    int c=0;
	    for(int i=0;i<n+m-1;i++){
	        if(a[i]!=a[i+1]){
	            c++;
	        }
	    }
	    cout<<c+1<<endl;
	}
	return 0;
}
