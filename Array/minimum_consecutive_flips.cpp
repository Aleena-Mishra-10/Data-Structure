#include<iostream>
using namespace std;

void printFlip(int a[],int n);
void printFlip(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			if(a[i]!=a[0]){
				cout<<"From "<<i<<" to ";
			}
			else{
			cout<<(i-1)<<endl;
			}
		}
	}
	if(a[n-1]!=a[0]){
		cout<<(n-1)<<endl;
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
	printFlip(a,n);
	return 0;
}
