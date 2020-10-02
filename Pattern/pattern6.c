#include <stdio.h>
int main() {
	int i,j;
	int n=5,num;
	int l=1;
	int k;
	for(i=1;i<=n;i++){
		k=num-1;
		for(j=1;j<=num;j++){
			if(i%2==0){
				printf("*");
			}
			else{
				if(i%2==0){
					printf("%d",k+l-num+i);
					l++;
					k=k-2;
				}
				else{
					printf("%d",l++);
				}
			}
			num=num+2;
			printf("\n");
		}
	}
	return 0;	
}
