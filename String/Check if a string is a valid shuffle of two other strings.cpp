#include<iostream>
using namespace std;

bool shuffle(string s1,string s2,string res){
	if(s1.length()+s2.length()!=res.length()){
		return false;
	}
	int i=0,j=0,k=0;
	while(k!=res.length()){
		if(i<s1.length()&&s1[i]==res[k]){
			i++;
		}
		else if(j<s2.length()&&s2[j]==res[k]){
			j++;
		}
		else{
			return false;
		}
		k++;
	}
	if(i<s1.length()||j<s2.length()){
		return false;
	}
	return true;
}


int main(){
	string s1="XY";
	string s2="12";
	string res[]={"1XY2", "Y12X"};
	for(string r:res){
		if(shuffle(s1,s2,r)==true){
			cout<<"valid shuffle\n";
		}
		else{
			cout<<"not a valid shuffle\n";
		}
	}
	
	
	return 0;
}
