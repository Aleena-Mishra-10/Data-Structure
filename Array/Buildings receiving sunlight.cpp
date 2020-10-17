#include <iostream>
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
	    int c=1;
	    int max_h=a[0];
	    for(int i=1;i<n;i++){
	       if(max_h<=a[i]){
	           c=c+1;
	           max_h=a[i];
	       }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
