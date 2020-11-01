#include<bits/stdc++.h>
using namespace std;

void rearrange(int a[],int n){
	
	int temp,j,i;
	for(i=0;i<n;i++){
		temp=a[i];
		if(a[i]>0){
			continue;
		}
		j=i-1;
		while(a[j]>0&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;	
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int n=6;
	int a[]={1,-1,2, -2, 3, -3};
     rearrange(a, n); 
    return 0; 
}
