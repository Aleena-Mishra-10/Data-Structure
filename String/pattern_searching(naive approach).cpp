#include<bits/stdc++.h>
using namespace std;

void find(char *str,char *ptr){
	int i;
	int m=strlen(str);
	int n=strlen(ptr);
	for(i=0;i<=m-n;i++){
		int j;
		for(j=0;j<n;j++){
			if(ptr[j]!=str[i+j]){
				break;
			}
		}
		if(j==n){
			cout<<i<<" ";
		}
	}
}
int main(){
	char str[50],ptr[30];
	cout<<"Enter a string\n";
	cin>>str;
	cout<<"enter a pattern\n";
	cin>>ptr;
	find(str,ptr);
	return 0;
}
