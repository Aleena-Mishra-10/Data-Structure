#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,i,j,k;
	cout<<"enter size of array\n";
	cin>>n;
	int arr[n];
	cout<<"enter array elements\n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	//int temp;
	for(j=0;j<n-1;j+=2){
		int temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	for(k=0;k<n;k++){
		cout<<arr[k]<<endl;
	}
	return 0;
}
