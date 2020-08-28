#include<iostream>
using namespace std;
int main(){
	int n;
	int s;
	cout<<"Enter size of the array\n";
	cin>>n;
	cout<<"Enter sum\n";
	cin>>s;
	int arr[n],i,j;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int cur_sum,k;
	for(j=0;j<n;j++){
		cur_sum=arr[j];
		for(k=j+1;k<=n;k++){
			if(cur_sum==s){
				cout<<"Sum found between index "<<j+1<<" to "<<k<<endl;
			}
			if(cur_sum>s||k==n){
				break;
			}
			cur_sum=cur_sum+arr[k];
		}
	}	
	return 0;
}
