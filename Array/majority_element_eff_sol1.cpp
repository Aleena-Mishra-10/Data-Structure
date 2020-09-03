#include<iostream>
using namespace std;
//O(n) solution & O(1) auxilary solution
//Moore's Voting Algorithm
void print(int a[],int n);
int findCandidate(int a[],int n);
bool isMajority(int a[],int n,int cand);

void print(int a[],int n){
	int cand=findCandidate(a,n);
	if(isMajority(a,n,cand)){
		cout<<" Majority element is: "<<cand;
	}
	else{
		cout<<"No majority present\n";
	}
}
int findCandidate(int a[],int n){
	int i , maj_index=0,count=1;
	for(i=1;i<n;i++){
		if(a[maj_index]==a[i]){
			count++;
		}
		else{
			count--;
		}
		if(count==0){
			maj_index=i;
			count=1;
		}
	}
	return a[maj_index];
}
bool isMajority(int a[],int n,int cand){
	int i;
	int count=0;
	for(i=0;i<n;i++){
		if(a[i]==cand){
			count++;
		}
	}
	if(count>n/2){
		return 1;
	}
	else {
		return 0;
	}
}

int main(){
	int n;
	cout<<"Enter size of element\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	print(a,n);
	return 0;
}
