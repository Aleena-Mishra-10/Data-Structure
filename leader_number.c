/*program to print all the LEADERS in the array.
Note: An element is leader if it is greater than all the elements to its right side.*/
#include<stdio.h>
int main()
{
int a[5],i,j,c=0,l=0;
for(i=0;i<5;i++)
{
printf("Enter array elements\n");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{    
if(a[i]>a[j])
{
l++;
c++;
}
}
if(l==5-i+1)//n=4
{
printf("%d\n",a[i]);
}
l=l-c;
}
return 0;
}
