#include<stdio.h>
#include<stdlib.h>
int* arr;
int stops;
void reduce(int pos,int multiplier)
{
	if(pos*multiplier>stops)
		return;
	else
	{
		if(multiplier==1)
			reduce(pos,multiplier+1);
		else
		{
			arr[pos*multiplier]=arr[pos*multiplier]-arr[pos];
	/*printf("\n");
	for(int i=1;i<=stops;i++)
		printf("%d ",arr[i]);*/
			reduce(pos,multiplier+1);
		}
	}
}
 
int main()
{
	//printf("\nEnter the number of stops:");
	scanf("%d",&stops);
	arr=malloc((stops+1)*sizeof(int));
	//printf("\nEnter the number of buses:\n");
	for(int i=1;i<=stops;i++)
		scanf("%d ",&arr[i]);
	for(int i=1;i<=stops;i++)
		reduce(i,1);
	//printf("\n");
	for(int i=1;i<=stops;i++)
		printf("%d ",arr[i]);
	return 0;
}
