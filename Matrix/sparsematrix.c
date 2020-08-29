#include<stdio.h>
#include<stdlib.h>
int a[50][50],b[50][3];
void convert(int m,int n,int c);
void display(int c);
int main()
{
	int i,j,m,n,opt,c;
	printf("1.ENTER MATRIX ELEMENT\n");
	printf("2.CONVERT\n");
	printf("3.ADDITION\n");
	printf("4.TRANSPOSE\n");
	printf("enter size of matrix\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				c++;
			}
			
		}
	}
	
	convert(m,n,c);
	display(c);
	return 0;
	
}
void convert(int m,int n,int c)
{	
	int k=1,i,j;
	b[0][0]=m;
	b[0][1]=n;
	b[0][2]=c;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		   
		}
	
	}
	
}
void display(int c)
{
	int i,j;
	for(i=0;i<=c;i++)
	{	
		for(j=0;j<3;j++){
		
		printf("%d\t",b[i][j]);
	}
	printf("\n");
	}
	
}
