#include<iostream>
using namespace std;

int findTrappingWater(int a[],int n);

int findTrappingWater(int a[],int n){
	int i,j,k,res=0;
	int lmax[n],rmax[n];
		lmax[0]=a[0];
		for(j=1;j<n;j++){
			lmax[j]=max(a[j],lmax[j-1]);
			}
		rmax[n-1]=a[n-1];
		for(k=n-2;k>=0;k--){
			rmax[k]=max(a[k],rmax[k+1]);
		}
		for(i=0;i<n;i++){
			res+=(min(lmax[i],rmax[i])-a[i]);
		}
		return res;
}
	
int main(){
	int n;
	cout<<"Enter size of element\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int amt=findTrappingWater(a,n);
	cout<<"The amount of water can be stored: "<<amt;
	return 0;
}
