#include<iostream>
using namespace std;
#define CHAR 256
int main(){
	int i;
	string str1,str2;
	cout<<"Enter two string:\n";
	cin>>str1;
	cin>>str2;
	if(str1.length()!=str2.length())
	{
		cout<<"Not anagram\n";
	}
	int count[CHAR]={0};
	for(i=0;i<str1.length();i++){
		count[str1[i]]++;
		count[str2[i]]--;
	}
	for(i=0;i<CHAR;i++){
		if(count[i]!=0){
			cout<<"Not anagram";
			break;
		}
	}
	cout<<"Anagram";
	return 0;
}
