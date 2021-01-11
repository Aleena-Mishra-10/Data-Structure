#include <bits/stdc++.h>
using namespace std;

int main() {
          
          map<string,string> mp;
	       mp["0000"]="a";
	       mp["0001"]="b";
	       mp["0010"]="c";
	       mp["0011"]="d";
	       mp["0100"]="e";
	       mp["0101"]="f";
	       mp["0110"]="g";
	       mp["0111"]="h";
	       mp["1000"]="i";
	       mp["1001"]="j";
	       mp["1010"]="k";
	       mp["1011"]="l";
	       mp["1100"]="m";
	       mp["1101"]="n";
	       mp["1110"]="o";
	       mp["1111"]="p";
	int t;
	cin>>t;
	
	while(t--){
	       int n;
	       string s;
	       cin>>n;
	       cin>>s;
	       string ans="";
	       
	       
	       for(int i=0;i<n;i=i+4){
	           string f=s.substr(i,4);
	           ans.append(mp[f]);
	       }
	       cout<<ans<<endl;
	}
	return 0;
}
