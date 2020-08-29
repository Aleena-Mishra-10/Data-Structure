#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	int count[26]={0};
	int i;
	for(i=0;i<str.length();i++){
		count[str[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(count[i]>0){
			cout<<(char)(i+'a')<<" "<<count[i]<<endl;
		}
	}
	return 0;
}
