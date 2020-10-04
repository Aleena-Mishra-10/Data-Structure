#include<bits/stdc++.h>
using namespace std;

void reverseWord(char str[],int n);
void reverse1(char str[],int low,int high);

void reverseWord(char str[],int n){
	int start=0;
	int end;
	for(end=0;end<n;end++){
		if(str[end]==' '){
			reverse1(str,start,end-1);
			start=end+1;
		}
	}
	reverse1(str,start,n-1);
	reverse1(str,0,n-1);
	cout<<"\nReverse String is: "<<str;
}
void reverse1(char str[],int low,int high){
	while(low<=high){
		swap(str[low],str[high]);
		low++;
		high--;
	}
}

int main(){
	char str[50];
	cout<<"Enter a string\n";
	cin.getline(str,29);
	cout<<"Original String is: "<<str;
	int n=strlen(str);
	reverseWord(str,n);
	return 0;
}
