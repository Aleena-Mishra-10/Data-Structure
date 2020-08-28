#include<stdio.h>
void repeat(int *arr,int x,int p)
{ 
 int freq[x], count;
 for(int i=0;i<x;i++)
 {
   freq[i]=-1;
 }
 for(int i=0;i<x;i++)
 {
  count=1;
  for(int j=i+1;j<x;j++)
  {
     if(arr[i]==arr[j])
     {
       count++;
       freq[j]=0;
     }
  }
  if(freq[i]!=0 && count!=1)
  {
    freq[i]=count;
  }
 }
 int l=freq[0],k=0,dup=0;
 for(int i=0;i<x;i++)
 {
   if(freq[i]>(x/p))
   {
     printf("The element is %d\n",arr[i]);
   
   }
   
 }
}

int main()
{
  int n;
  printf("Enter total no of elements:");
  scanf("%d",&n);
  int k;
  printf("Enter value of k:");
  scanf("%d",&k);
  int ar[n];
  printf("Enter the elements:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  printf("The original array is:  \n");
	for(int i = 0; i < n; i++)
		{
			printf("%d  ", ar[i]);
		}
	printf("\n");
  
  repeat(ar,n,k);
  return 0;
}
