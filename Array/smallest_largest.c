#include<stdio.h>
#include <stdlib.h>
int main(){
     int n , a[100],l,s;
     printf("enter no of elements:\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         a[i] = (rand() % 100)+1;
     }
     l=a[0];
     for(int i=1;i<n;i++){
         if(a[i]>l){
             l=a[i];
         }
     }
     s=a[0];
     for(int i=1;i<n;i++){
         if(a[i]<s){
             s=a[i];
         }
     }
     printf("Smallest is:%d\t",s);
     printf("Largestest is:%d\t",l);
    return 0;
}