#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=5;j++){
			if(i%2!=0){
				if(j!=5){
					printf("%d",i);
				}
				else{
					printf("%d",i+1);
				}
			}
			else{
				if(j==1){
					printf("%d",i+1);
				}
				else{
					printf("%d",i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
