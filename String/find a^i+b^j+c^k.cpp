#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    //int n;
	    //cin>>n;
	    string s;
	    cin>>s;
	    int aCount=0,bCount=0,cCount=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='a'){
	            aCount = (1+2*aCount);
	        }
	        else if(s[i]=='b'){
	            bCount = (aCount + 2*bCount);
	        }
	        else if(s[i]=='c'){
	            cCount = (bCount + 2*cCount);
	        }
	    }
	    cout<<cCount<<endl;
	}
	return 0;
}
