#include<stdio.h>
int binary_search(int a[],int ,int ,int );
int main()
{
	int i,n,m,a[30],r;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter array elements in sorted manner\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("enter an element to be searched\n");
	scanf("%d",&m);
	int lb=0;
	int ub=n-1;
	r=binary_search(a,lb,ub,m);
	printf("%d",r);
	return 0;
}
int binary_search(int a[30],int lb,int ub,int m)
{
	int mid;
	if(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(m==a[mid])
		{
			printf("found");
			return(mid+1);
		}
		else if(a[mid]>m)
		{
			binary_search(a,lb,mid-1,m);
		}
		else
		{
			binary_search(a,mid+1,ub,m);
		}
	}
	else
	{
		return(-1);
	}
}
