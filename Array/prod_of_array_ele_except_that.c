#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enter value\n");
	scanf("%d",&n);
	int a[n],freq[n],prod=1,i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		prod=prod*a[i];
	}
	printf("original array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("Modified array\n");
	for(i=0;i<n;i++){
		a[i]=prod/a[i];
		printf("%d\t",a[i]);
	}
	return 0;	
}
