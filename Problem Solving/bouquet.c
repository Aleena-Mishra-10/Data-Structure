#include<stdio.h>
void arrange(int n, int k, int arr[])
{
int i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<k;i++)
printf("%d ",arr[i]);
for(i=n-1;i>=k;i--)
printf("%d ",arr[i]);
}
int main()
{
int n,k,i;
int arr[20];
printf("\nEnter the values of n and k : ");
scanf("%d%d",&n,&k);
printf("\nEnter all the elements:\n ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
arrange(n,k,arr);
}


