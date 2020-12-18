#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	     string res;
	     for(int i=0;i<str.size();i++){
	         res+=str[i];
	         while(i+1<str.size() && str[i+1]==str[i]){
	             i+=1;
	         }
	     }
	     cout<<res;
	    cout<<endl;
	}
	
	return 0;
}
