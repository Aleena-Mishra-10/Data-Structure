#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	          int n;
	          cin>>n;
	          int a[n];
	          int i=0;
	          while(i<n){
	                    cin>>a[i];
	                    i++;
	          }
	          int c=a[0];
	          for(int j=1;j<n;j++){
	                   c= __gcd(c,a[j]);
	          }
	          (c==1) ? cout<<n:cout<<-1;
	          cout<<"\n";
	}
	return 0;
}
