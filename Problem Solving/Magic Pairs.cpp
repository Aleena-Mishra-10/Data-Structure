#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	          long long n;
	          cin>>n;
	          long long a[n];
	          long long i=0;
	          while(i<n){
	                    cin>>a[i];
	                    i++;
	          }
	          cout<<(n*(n-1))/2<<endl;
	}
	return 0;
}
