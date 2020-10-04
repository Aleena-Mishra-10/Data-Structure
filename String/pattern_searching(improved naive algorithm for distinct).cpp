#include<bits/stdc++.h>
using namespace std;

void find(string &str,string &ptr){
	int m=str.length();
	int n=ptr.length();
	int i;
	for(i=0;i<=m-n;){
		int j;
		for(j=0;j<n;j++){
			if(ptr[j]!=str[i+j]){
				break;
			}
		}
		if(j==n){
			cout<<i<<" ";
		}
		if(j==0){
			i++;
		}
		else{
			i=(i+j);
		}
	}
}
int main(){
	string str,ptr;;
	cout<<"Enter a string\n";
	cin>>str;
	cout<<"enter a pattern\n";
	cin>>ptr;
	find(str,ptr);
	return 0;
}
