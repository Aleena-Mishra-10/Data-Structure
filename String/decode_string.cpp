#include<bits/stdc++.h>
using namespace std;

void decode(string s){
	int l=s.length();
	int i;
	for(i=0;i<l;i++){
		if(s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
			int n=((int)s[i]-(int)'0');
			int j;
			for(j=0;j<n;j++){
				cout<<s[i-1];
			}	
		}
	}
}
int main(){
	string str="a2b4c3";
	decode(str);
	return 0;
}
