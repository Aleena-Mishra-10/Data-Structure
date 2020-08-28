#include<stdio.h>
#include<stdlib.h>
int main(){
     int n ;
     printf("enter no of elements:\n");
     scanf("%d",&n);
     int a[n],freq[n];
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0; // avoid counting same element;
            }
        }
        if(freq[i]!=0){
                freq[i]=count;
        }
        
    }
    for(int i=0;i<n;i++){
       if(freq[i]!=0){
           printf("%d element is repeated %d  many of times:\n",a[i],freq[i]);
       }
    }
    int l ,pos,k;
    l=freq[0];
    for(k=0;k<n;k++){
        if(freq[k]>l){
            l=freq[k];
            pos=k;
        }
    }
    printf("Most repeating element is:%d",a[pos]);
     return 0;
}