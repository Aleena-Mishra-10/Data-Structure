#include <iostream>
using namespace std;

int main() {
          int t;
          cin>>t;
          while(t--){
                    int n,k,d;
                    cin>>n>>k>>d;
                    int a[n];
                     int res=0;
                    for(int i=0;i<n;i++){
                              cin>>a[i];
                              res=res+a[i];
                    }
                    int ans=res/k;
                    if((ans)<=d){
                              cout<<ans<<endl;
                    }
                    else if((ans)>d){
                              cout<<d<<endl;
                    }
                    
                    
                    
          }
	return 0;
}
