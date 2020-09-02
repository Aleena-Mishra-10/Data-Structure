#include<iostream>
using namespace std;
void reverse(int a[],int n){
	int low ,high;
	low=0;
	high=n-1;
	while(low<high){
		int temp=a[low];
		a[low]=a[high];
		a[high]=temp;
		low++;
		high--;
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
	reverse(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
