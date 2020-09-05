#include<iostream>
using namespace std;

int find(int a[],int n,int k);
int find(int a[],int n,int k){
	int max_sum=INT_MIN;
	int i,j;
	for(i=0;i+k-1<n;i++){
		int sum=0;
		for(j=0;j<k;j++){
			sum+=a[i+j];
		}
		max_sum=max(sum,max_sum);
	}
	return max_sum;
}
int main(){
	int n,k;
	cout<<"Enter size of element\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the value of k\n";
	cin>>k;
	cout<<find(a,n,k);
	return 0;
}
