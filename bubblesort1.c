#include<stdio.h>
int main()
{
	int i,j,n,a[10],t;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;	
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
