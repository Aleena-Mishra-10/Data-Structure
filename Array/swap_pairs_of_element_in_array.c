#include<stdio.h>
int main(){
	int n;
	printf("enter the value n:\n");
	scanf("%d",&n);
	int a[n],i,j,m,temp;
	for(i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
	if(n%2==0){
		for(i=0;i<n;i=i+2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}
	else{
		for(i=0;i<n-1;i=i+2){
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	

 	for(j=0;j<n;j++){
 		printf("%d ",a[j]);
	 }	
	return 0;
}
