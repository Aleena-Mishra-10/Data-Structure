#include<stdio.h>
void find_sum(int a[],int b[],int m, int n);
int main()
{
	int a[10],i,n,b[10],m;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter size\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	find_sum(a,b,m,n);
	
	return 0;
}
void find_sum(int a[],int b[],int m, int n)
{
	int i,j,k,sum[10],c[10],d[10],l=0,t1,t2,t3;
	printf("enter the no of pair to find the smallest sum in between two arrays\n");
	scanf("%d",&k);
	if(k>m*n)
	{
		printf("not possible\n");
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m-1;j++,l++)
		{
			sum[l]=a[i]+b[j];
			c[l]=a[i];
			d[l]=b[j];
			
			
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(sum[j]>sum[j+1])
			{
			t1=sum[j];
			sum[j]=sum[j+1];
			sum[j+1]=t1;	
			
			t2=c[j];
			c[j]=c[j+1];
			c[j+1]=t2;
			
			
			t3=d[j];
			d[j]=d[j+1];
			d[j+1]=t3;			
			}	
		}
	}
	for(i=0;i<3;i++)
	{
		printf("(%d+%d)\n",c[i],d[i]);
	}

}
