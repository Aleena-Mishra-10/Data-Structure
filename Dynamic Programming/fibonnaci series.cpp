#include<iostream>
#include<string.h>
using namespace std;

int mem[100];
int find(int n){
	int res;
	if(mem[n]==-1){
		if(n==0||n==1){
			return n;
		}
		else{
			res=find(n-1)+find(n-2);
		}
		mem[n]=res;
	}
	return mem[n];
}



int main(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	memset(mem,-1,sizeof(mem));
	cout<<find(n);
	return 0;
}
