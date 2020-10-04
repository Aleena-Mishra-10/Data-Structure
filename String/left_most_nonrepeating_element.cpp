#include<bits/stdc++.h>
using namespace std;

#define CHAR 256
int leftMost();
int left_most();//One traversal solution
int leftMost(){
	string str;
	cout<<"enter a string: ";
	cin>>str;
	cout<<"\n";
	int i;
	int count[CHAR]={0};
	for(i=0;i<str.length();i++){
		count[str[i]]++;
	}
	for(i=0;i<CHAR;i++){
		if(count[str[i]]==1){
			return i;
		}
	}
	return -1;
}

int left_most(){
	string str;
	cout<<"\nenter a string:";
	cin>>str;
	int fi[CHAR],i;
	fill(fi,fi+CHAR,-1);
	for(i=0;i<str.length();i++){
		if(fi[str[i]]==-1){
			fi[str[i]]=i;
		}
		else{
			fi[str[i]]=-2;
		}
	}
	int res=INT_MAX;
	for(i=0;i<CHAR;i++){
		if(fi[i]>=0){
			res=min(res,fi[i]);
		}
	}
	return (res==INT_MAX)?-1:res;	
}

int main(){

	cout<<"Left most non-repeating character in string1 is at index "<<leftMost();
	cout<<"Left most non-repeating character in string2 is at index "<<left_most();
	return 0;
}
