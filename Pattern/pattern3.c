#include<stdio.h>
int main(){
	int s=3,n=6;
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",s);
			
		}
		printf("\n");
		s++;
	}
	
	for(i=4;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("%d",n);
		}
		n--;
		printf("\n");
	}
	return 0;
}
