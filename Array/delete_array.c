#include<stdio.h>
int main()
{
int a[4],i,n,temp;
printf("Enter the index\n");
scanf("%d",&n);
for(i=0;i<4;i++)
{
printf("Enter array elements\n");
scanf("%d",&a[i]);
}
for(i=n;i<4;i++)
{
a[i]=a[i+1];
}

for(i=0;i<3;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

