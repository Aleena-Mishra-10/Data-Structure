#include<stdio.h>
#include<stdlib.h>
void nonzero(int a[10][10],int n);
void sum_major(int a[10][10],int n);
void sum_below_minor(int a[10][10],int n);
void prod_diagonal(int a[10][10],int n);
int main(){
	int i,j,n;
	printf("Enter value for n\n");
	scanf("%d",&n);
	int a[10][10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	nonzero(a,n);
	sum_major(a,n);
	sum_below_minor(a,n);
	prod_diagonal(a,n);
	return 0;
}
void nonzero(int a[10][10],int n){
	int i,j;
	int c=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=0)
			c++;
		}
	}
	printf("nonzero:%d\n",c);
}
void sum_major(int a[10][10],int n){
	int i,j;
	int s=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j)
			{
				s+=a[i][j];
			}
		}
	}
	printf("sum_major:%d\n",s);
}	
void sum_below_minor(int a[10][10],int n){
	int i,j;
	int s=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j==n)
			{
				s+=a[i][j];
			}
		}
	}
	printf("sum_below_minor:%d\n",s);
}
void prod_diagonal(int a[10][10],int n){
	int i,j;
	int p=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
			{
				p*=a[i][j];
			}
		}
	}
	printf("prod_diagonal:%d\n",p);
}	
