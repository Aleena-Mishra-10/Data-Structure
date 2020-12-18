#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    n=s.length();
	    char ch=s[0];
	    int cnt=1;
	    for(int i=1;i<n;i++){
	        if(s[i]==ch){
	            cnt++;
	        }
	        else{
	            cnt--;
	        }
	        if(cnt==0){
	            cnt=1;
	            ch=s[i];
	        }
	    }
	    cnt=0;
	    for(int i=0;i<n;i++){
	        if(s[i]==ch){
	            cnt++;
	        }
	    }
	    cout<<(cnt<=n/2)<<endl;
	}
	return 0;
}
