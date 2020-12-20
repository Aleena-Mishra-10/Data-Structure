#include <iostream>
using namespace std;

int main() {
	int t,e;
	cin>>t;
	string m,s;
	cin>>m;
	while(t--){
	          cin>>s;
	          for(int i=0;i<s.size();i++){
	                    e = (int)s[i];
	                    if(e>=97 && e<=122){
	                              e-=97;
	                              cout<<m[e];
	                    }
	                    else if(e>=65 && e<=90){
	                              e-=65;
	                              e=(int)m[e]-32;
	                              cout<<(char)e;
	                              
	                    }
	                    else if(e==95){
	                              cout<<" ";
	                    }
	                    else{
	                              cout<<s[i];
	                    }
	          }
	          cout<<endl;
	}
	return 0;
}
