#include<iostream>
using namespace std;

int findMajority(int a[],int n);
int findMajority(int a[],int n){
	int i,j,res=0,count;
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count>n/2){
			return a[i];
		}
	}
	return -1;
}
int main()
{	
	int n;
	cout<<"Enter size of element\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Majority element is: "<<findMajority(a,n);
	return 0;
}
