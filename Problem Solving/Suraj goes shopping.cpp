#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++) cin>>arr[i];
	    
	    sort(arr,arr+n);
	    reverse(arr,arr+n);
	    
	    long long sum=0;
	    for(long long i=0;i<n;i++){
	        if(i%4==0 || i%4==1) sum=sum+arr[i];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
