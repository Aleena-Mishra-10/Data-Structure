#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("enter n\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int key;
	printf("enter key:\n");
	scanf("%d",&key);
	int j,k;
	for(j=0;j<n-1;j++){
		for(k=j+1;k<n;k++){
			if((a[j]*a[j])+(a[k]*a[k])==key){
				printf("%d\t%d",a[j],a[k]);
			}
		}
	}
	return 0;
}
