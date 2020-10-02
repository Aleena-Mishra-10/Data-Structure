#include<stdio.h>
int main()
{
int i,j,l,count=0; 
printf("Enter the number of rows/columns\n"); 
scanf("%d",&l);
for(i=0;i<l;i++) 
  {
    if(i==1)
      {
        count+=l;   
      }
    if(i==l-1)
      {
        count=l;
      }
    for(j=0;j<l;j++) 
     {
        count++;
        if(j==l-1)
          {
            printf("%d",count);
          }
        else
          {
            printf("%d*",count);
          }
     }
    printf("\n"); 
  }
}
