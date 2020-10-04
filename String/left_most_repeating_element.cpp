#include<iostream>
using namespace std;

#define CHAR 256
int leftMost();//O(n^2)
int left_most();//O(n)

int leftMost(){
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	int i,j;
	for(i=0;i<str.length();i++){
		for(j=i+1;j<str.length();j++){
			if(str[i]==str[j]){
				return i;
			}
		}
	}
	return -1;
}
int left_most(){
	string str;
	cout<<"\nenter a string: ";
	cin>>str;
	int i;
	int count[CHAR]={0};
	for(i=0;i<str.length();i++){
		count[str[i]]++;
	}
	for(i=0;i<str.length();i++){
		if(count[str[i]]>1){
			return i;
		}
	}
	return -1;
}

int main(){
	int res1,res2;
	res1=leftMost();
	cout<<"Left most repeating character in string1 is at index "<<res1;
	res2=left_most();
	cout<<"Left most repeating character in string2 is at index "<<res1;
	return 0;
}
